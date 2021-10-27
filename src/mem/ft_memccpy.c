/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 02:20:26 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/27 11:56:06 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Copies no more than 'n' bytes from memory area 'src' 
 *	to memory area 'dest', stopping when the character 'c' is found.
 * @param	dest [void *] destination memory to be pasted
 * @param	src [const void *] source memory to be copied
 * @param	c [int] char to be found
 * @param	n [size_t] number of bytes to copy
 * @returns	[void *] pointer to the next character in dest after c, 
 *				or NULL if c was not found in the first n characters of src
**/
void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	*c_found;

	c_found = NULL;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n--)
	{
		*d++ = *s;
		if (*s++ == (unsigned char)c)
		{
			c_found = d;
			break ;
		}
	}
	if (c_found)
		return ((void *)c_found);
	else
		return (NULL);
}
