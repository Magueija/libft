/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 02:29:07 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/27 12:01:11 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Copies 'n' bytes from memory area 'src' to memory 
 *	area 'dest'. The memory areas may overlap.
 * @param	dest [void *] destination memory to be pasted
 * @param	src [const void *] source memory to be copied
 * @param	n [size_t] number of bytes to copy
 * @returns	[void *] pointer to dest
**/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;
	if (d == s || n == 0)
		return (dest);
	else if (d < s || d > s + n)
		return (ft_memcpy(dest, src, n));
	else
	{
		d += n;
		s += n;
		while (n--)
			*--d = *--s;
		return (dest);
	}
}
