/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 02:29:56 by tosilva           #+#    #+#             */
/*   Updated: 2021/05/13 20:15:30 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Is like the ft_memchr() function, except that it searches 
**	backward from the end of the n bytes pointed to by s 
**	instead of forward from the beginning.
** @param:	- [const void *] memory to be search 
**			- [int] char to be found
**			- [size_t] number of bytes to search
** @return: [void *] pointer to the matching byte or NULL 
**				if the character does not occur in the given memory area.
*/
void	*ft_memrchr(const void *s, int c, size_t n)
{
	const unsigned char	*s_cp;
	const unsigned char	*dst;

	s_cp = (const unsigned char *)s;
	dst = NULL;
	while (*s_cp && n--)
	{
		if (*s_cp == c)
			dst = s_cp;
		s_cp++;
	}
	if (c == '\0' && *s_cp == '\0')
		return (((void *)s_cp));
	else if (dst)
		return (((void *)dst));
	else
		return (NULL);
}
