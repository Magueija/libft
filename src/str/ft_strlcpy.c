/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 03:01:26 by tosilva           #+#    #+#             */
/*   Updated: 2021/05/15 19:40:58 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copy strings. Takes the full size of the buffer 
**	(not just the length) and guarantee to NUL-terminate 
**	the result (as long as size is larger than 0). Note 
**	that a byte for the NUL should be included in size. 
**	The string src must be NUL-terminated. 
**	(See libft/docs/strlcat_&_strlcpy_explained.pdf).
** @param:	- [char *] destination string
**			- [const char *] the string to be copied
**			- [size_t] the size to copy
** @return:	[size_t] the total length of the string it tried 
				to create; that means the length of src.
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	const char	*s;

	if (!dst || !src)
		return (0);
	s = src;
	if (size != 0)
	{
		while (*s && --size)
			*dst++ = *s++;
		*dst = '\0';
	}
	while (*s)
		s++;
	return (s - src);
}
