/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mtzcalloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 02:30:53 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/27 12:05:34 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Allocates memory for a matrix of 'nrows' rows of size 
 *	'rsize' and 'ncols' columns of size 'csize' each and 
 *	returns a pointer to the allocated memory. 
 *	The memory is set to zero.
 * @param	nrows [size_t] number of rows
 * @param	rsize [size_t] rows size
 * @param	ncols [size_t] number of columns
 * @param	csize [size_t] columns size
 * @returns	[void *] pointer to memory allocated and set to zero
**/
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
