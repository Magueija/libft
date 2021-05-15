/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 03:01:05 by tosilva           #+#    #+#             */
/*   Updated: 2021/05/15 17:20:57 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Concatenate strings. Takes the full size of the buffer 
**	(not just the length) and guarantee to NUL-terminate 
**	the result (as long as there is at least one byte 
**	free in dst). Note that a byte for the NUL should be 
**	included in size. Both src and dst must be NUL-terminated. 
**	(See libft/docs/strlcat_&_strlcpy_explained.pdf for more)
** @param:	- [char *] destination string
**			- [const char *] the string to be added to the 
**				end of dest
**			- [size_t] the size to concatenate
** @return:	[size_t] the total length of the string it 
**				tried to create. That means the initial length of dst 
**				plus the length of src. If ft_strlcat() traverses size 
**				characters without finding a NUL, the length of the string 
**				is considered to be size and the destination string will 
**				not be NUL-terminated (since there was no space for the NUL).
*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	const char	*s;
	size_t		len_dst;

	s = src;
	len_dst = ft_strnlen(dst, size);
	size = size - len_dst;
	if (size != 0)
	{
		dst = dst + len_dst;
		while (*s && --size)
			*dst++ = *s++;
		*dst = '\0';
	}
	while (*s)
		s++;
	return (len_dst + (s - src));
}
