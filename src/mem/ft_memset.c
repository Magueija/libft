/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 02:30:18 by tosilva           #+#    #+#             */
/*   Updated: 2021/05/13 20:13:17 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Fills the first n bytes of the memory area 
**	pointed to by s with the constant byte c.
** @param:	- [void *] memory to be filled
**			- [int] fill value
**			- [size_t] number of bytes to fill
** @return: [void *] pointer to the memory area s
*/
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s_cp;

	s_cp = (unsigned char *)s;
	while (n--)
		*s_cp++ = (unsigned int)c;
	return (s);
}
