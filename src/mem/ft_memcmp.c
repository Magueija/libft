/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 02:27:53 by tosilva           #+#    #+#             */
/*   Updated: 2021/05/13 20:14:54 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Compares the first n bytes (each interpreted as unsigned char) 
**	of the memory areas s1 and s2.
** @param:	- [const void *] memory to be compared with s2
**			- [const void *] memory to be compared with s1
**			- [size_t] number of bytes to compare
** @return: [void *] returns an integer less than, equal to, 
**	or greater than zero if the first n bytes of s1 is found, 
**	respectively, to be less than, to match, or be greater 
**	than the first n bytes of s2.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_cp;
	unsigned char	*s2_cp;

	if (n == 0)
		return (0);
	s1_cp = (unsigned char *)s1;
	s2_cp = (unsigned char *)s2;
	while (n--)
	{
		if (*s1_cp != *s2_cp)
			return (*s1_cp - *s2_cp);
		s1_cp++;
		s2_cp++;
	}
	return (0);
}
