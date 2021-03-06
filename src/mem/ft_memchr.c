/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 02:27:26 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/27 11:57:27 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Scans the initial 'n' bytes of the memory area pointed to 
 *	by 's' for the first instance of 'c'. Both 'c' and the bytes 
 *	of the memory area pointed to by 's' are interpreted as unsigned char.
 * @param	s [const void *] memory to be search 
 * @param	c [int] char to be found
 * @param	n [size_t] number of bytes to search
 * @returns	[void *] pointer to the matching byte or NULL 
 *				if the character does not occur in the given memory area
**/
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s_cp;

	s_cp = (const unsigned char *)s;
	c = (unsigned char)c;
	while (n--)
	{
		if (*s_cp == c)
			return ((void *)(s_cp));
		s_cp++;
	}
	return (NULL);
}
