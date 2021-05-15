/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 03:04:05 by tosilva           #+#    #+#             */
/*   Updated: 2021/05/15 17:59:52 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static short	ft_haschar(char c, const char *str)
{
	size_t	ct;

	ct = 0;
	while (str[ct])
	{
		if (c == str[ct])
			return (1);
		ct++;
	}
	return (0);
}

static size_t	ft_allocsz(size_t *start, size_t *end)
{
	if (*end < *start)
		return (0);
	else
		return (*end - *start);
}

/*
** Allocates (with malloc(3)) and returns a copy of 
**	s1 with the characters specified in set removed 
**	from the beginning and the end of the string.
** @param:	- [char const *] the string to be trimmed
**			- [char const *] the reference set of characters to trim
** @return:	[char *] the trimmed string. NULL if the allocation fails.
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	ct_str;
	size_t	start;
	size_t	end;
	size_t	alloc_size;

	if (!s1)
		return (NULL);
	start = 0;
	while (ft_haschar(s1[start], set) == 1)
		start++;
	end = ft_strlen((char *)s1);
	while (end && ft_haschar(s1[ft_ternint(end == 0, end, end - 1)], set) == 1)
		end--;
	alloc_size = ft_allocsz(&start, &end);
	str = (char *)malloc((alloc_size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ct_str = 0;
	while (start < end)
		str[ct_str++] = s1[start++];
	str[ct_str] = '\0';
	return (str);
}
