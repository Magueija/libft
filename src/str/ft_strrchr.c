/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 03:03:47 by tosilva           #+#    #+#             */
/*   Updated: 2021/05/15 17:51:38 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns a pointer to the last occurrence 
**	of the character c in the string s.
** @param:	- [const char *] the string to be searched
**			- [int] the character to be found
** @return:	[char *] pointer to the matched character 
**				or NULL if the character is not found. The 
**				terminating null byte is considered part of the 
**				string, so that if c is specified as '\\0', 
**				these functions return a pointer to the terminator.
*/
char	*ft_strrchr(const char *str, int c)
{
	size_t	len_str;

	len_str = ft_strlen(str);
	if (c == '\0')
		return ((char *)(str + len_str));
	while (len_str-- > 0)
		if (str[len_str] == (char)c)
			return ((char *)(str + len_str));
	return (NULL);
}
