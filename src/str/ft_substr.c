/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 03:04:34 by tosilva           #+#    #+#             */
/*   Updated: 2021/05/15 17:59:32 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a substring 
**	from the string s. 
**	The substring begins at index start and is of 
**	maximum size len.
** @param:	- [char const *] the string from which to create the substring
**			- [unsigned int] the start index of the substring in the string s
**			- [size_t] the maximum length of the substring
** @return:	[char *] the substring. NULL if the allocation fails.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	len_s;
	size_t	ct;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (len > len_s)
		str = malloc(sizeof(char) * (len_s + 1));
	else
		str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ct = 0;
	if (start < (unsigned int)len_s)
	{
		while (s[start + ct] && ct < len)
		{
			str[ct] = s[start + ct];
			ct++;
		}
	}
	str[ct] = '\0';
	return (str);
}
