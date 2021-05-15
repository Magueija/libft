/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 02:28:34 by tosilva           #+#    #+#             */
/*   Updated: 2021/05/13 20:08:56 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies n bytes from memory area src to memory 
**	area dest. The memory areas must not overlap.
** @param:	- [void *] destination memory to be pasted
**			- [const void *] source memory to be copied
**			- [size_t] number of bytes to copy
** @return: [void *] pointer to dest
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (n == 0 || dest == src)
		return ((void *)dest);
	while (n--)
		*d++ = *s++;
	return ((void *)dest);
}
