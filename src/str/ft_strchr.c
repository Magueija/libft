/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 02:59:34 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/27 12:43:48 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Returns a pointer to the first occurrence 
 *	of the character 'c' in the string 'str'.
 * @param	str [const char *] the string to be searched
 * @param	c [int] the character to be found
 * @returns	[char *] pointer to the matched character 
 *				or NULL if the character is not found. The 
 *				terminating null byte is considered part of the 
 *				string, so that if 'c' is specified as '\\0', 
 *				these functions return a pointer to the terminator.
**/
char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)(str));
		str++;
	}
	if (c == '\0' && *str == '\0')
		return ((char *)(str));
	return (NULL);
}
