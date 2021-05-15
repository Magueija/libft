/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 02:59:52 by tosilva           #+#    #+#             */
/*   Updated: 2021/05/15 17:38:17 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns a pointer to a new string 
**	which is a duplicate of the string s.
** @param:	- [const char *] the string to 
**				be copied
** @return:	[char *] pointer to the duplicated string, 
**				or NULL if insufficient memory was available.
*/
char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	s_len;
	size_t	ct;

	s_len = ft_strlen(s);
	str = malloc(sizeof(char) * (s_len + 1));
	if (!str)
		return (NULL);
	ct = 0;
	while (s[ct])
	{
		str[ct] = s[ct];
		ct++;
	}
	str[ct] = '\0';
	return (str);
}
