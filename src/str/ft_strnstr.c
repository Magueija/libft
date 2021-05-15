/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 03:03:29 by tosilva           #+#    #+#             */
/*   Updated: 2021/05/15 17:50:03 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Locates the first occurrence of the null-terminated 
**	string needle in the string haystack, where not 
**	more than n characters are searched. Characters 
**	that appear after a '\\0' character are not searched.
** @param:	- [const char *] string for the search
**			- [const char *] string to be searched in haystack
**			- [size_t] number of bytes to be searched
** @return:	[char *] If needle is an empty string, haystack is returned; 
**				if needle occurs nowhere in haystack , NULL is returned; 
**				otherwise a pointer to the first character of the first 
**				occurrence of needle is returned.
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	char	*hayt;
	char	*ndle;
	size_t	len_nd;

	if (*needle == 0)
		return ((char *)haystack);
	if (n == 0)
		return (NULL);
	hayt = (char *)haystack;
	ndle = (char *)needle;
	len_nd = ft_strlen(ndle);
	if (len_nd == 0)
		return (((char *)hayt));
	if (len_nd > ft_strlen(hayt))
		return (NULL);
	while (*hayt && n--)
	{
		if (n + 1 < len_nd)
			break ;
		if ((*hayt == *ndle)
			&& (ft_strncmp(hayt, ndle, len_nd) == 0))
			return (((char *)hayt));
		hayt++;
	}
	return (NULL);
}
