/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 14:38:15 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/27 12:07:19 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Swaps the memory of '*s1' and '*s2'. If 'tofree' 
 *	isn't 0, '*s2' is freed.
 * @param	s1 [void **] memory to be swapped to '*s2'
 * @param	s2 [void **] memory to be swapped to '*s1'
 * @param	tofree [short] free condition: non 0 
 *				to free '*s2' or 0 to not
**/
void	ft_swap(void **s1, void **s2, short tofree)
{
	void	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
	if (tofree)
		ft_free(s2);
}
