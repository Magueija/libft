/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 09:04:15 by tosilva           #+#    #+#             */
/*   Updated: 2021/05/13 19:57:42 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates memory for an array of nelem elements of size 
**	elsize each and returns a pointer to the allocated memory. 
**	If (elsize == sizeof(char)) the memory is filled with spaces 
**	and it is null ('\\0') terminated, else the memory is set to zero.
** @param:	- [size_t] number of elements
**			- [size_t] elements size
** @return: [void *] pointer to memory allocated and filled 
**				with spaces or set to zero
*/
void	*ft_malloc(size_t nelem, size_t elsize)
{
	void			*pt;
	unsigned char	*uchr_pt;

	pt = malloc(nelem * elsize);
	if (!pt)
		return (NULL);
	if (elsize == sizeof(char))
	{
		uchr_pt = (unsigned char *)pt;
		ft_memset(pt, ' ', nelem * elsize);
		uchr_pt[nelem - 1] = 0;
	}
	else
		ft_bzero(pt, nelem * elsize);
	return (pt);
}
