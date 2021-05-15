/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 03:00:26 by tosilva           #+#    #+#             */
/*   Updated: 2021/05/15 16:37:14 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a new
**	string, which is the result of the concatenation
**	of s1 and s2.
** @param:	- [char const *] the prefix string
**			- [char const *] the suffix string
** @return:	[char *] the new string. NULL if 
**				the allocation fails
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s1_size;
	size_t	s2_size;
	size_t	s_ct;
	size_t	str_ct;

	if (!s1 || !s2)
		return (NULL);
	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	str = malloc(sizeof(char) * (s1_size + s2_size + 1));
	if (!str)
		return (NULL);
	s_ct = 0;
	str_ct = 0;
	while (s1[s_ct])
		str[str_ct++] = s1[s_ct++];
	s_ct = 0;
	while (s2[s_ct])
		str[str_ct++] = s2[s_ct++];
	str[str_ct] = '\0';
	return (str);
}
