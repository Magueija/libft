/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 00:55:55 by tosilva           #+#    #+#             */
/*   Updated: 2021/05/13 19:53:28 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates memory for an array of nelem elements of size 
**	elsize each and returns a pointer to the allocated memory. 
**	The memory is set to zero.
** @param:	- [size_t] number of elements
**			- [size_t] elements size
** @return: [void *] pointer to memory allocated and set to zero
*/
void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*pt;

	pt = malloc(nelem * elsize);
	if (!pt)
		return (NULL);
	ft_bzero(pt, nelem * elsize);
	return (pt);
}
