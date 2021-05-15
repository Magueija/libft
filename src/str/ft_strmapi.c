/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 03:02:09 by tosilva           #+#    #+#             */
/*   Updated: 2021/05/15 17:38:04 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Applies the function f to each character of the 
**	string s to create a new string (with malloc(3)) 
**	resulting from successive applications of f.
** @param:	- [char const *] the string on which to iterate
**			- [char (*)(unsigned int, char)] the function to apply 
**				to each character
** @return:	[char *] the string created from the successive applications 
**	of f. Returns NULL if the allocation fails.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	ct;

	if (!s || !f)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	ct = 0;
	while (*s)
	{
		str[ct] = (*f)(ct, *s++);
		ct++;
	}
	str[ct] = '\0';
	return (str);
}
