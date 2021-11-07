/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freemtx.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 01:47:07 by tosilva           #+#    #+#             */
/*   Updated: 2021/11/07 02:25:14 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Frees the memory pointed by the matrix '**pt' and,
 * 	if exists, sets it to NULL.
 * @param	pt [void ***] pointer to a matrix to be freed
**/
void	ft_freemtx(void ***pt)
{
	size_t	i;

	if (pt && **pt)
	{
		i = 0;
		while ((*pt)[i])
		{
			free((*pt)[i]);
			(*pt)[i] = NULL;
			i++;
		}
		free(*pt);
		*pt = NULL;
	}
}
