/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtzcalloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 02:30:53 by tosilva           #+#    #+#             */
/*   Updated: 2021/05/13 20:21:47 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates memory for a matrix of nrows rows of size 
**	rsize and ncols columns of size csize each and 
**	returns a pointer to the allocated memory. 
**	The memory is set to zero.
** @param:	- [size_t] number of rows
**			- [size_t] rows size
**			- [size_t] number of columns
**			- [size_t] columns size
** @return: [void *] pointer to memory allocated and set to zero
*/
void	**ft_mtxcalloc(size_t nrows, size_t rsize, size_t ncols, size_t csize)
{
	void	**matriz;
	size_t	ct_row;

	matriz = ft_calloc(nrows, rsize);
	if (!matriz)
		return (NULL);
	ct_row = 0;
	while (ct_row < nrows - 1)
	{
		matriz[ct_row] = ft_calloc(ncols, csize);
		if (!matriz[ct_row])
			return (NULL);
		ct_row++;
	}
	return (matriz);
}
