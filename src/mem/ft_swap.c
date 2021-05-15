/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 14:38:15 by tosilva           #+#    #+#             */
/*   Updated: 2021/05/13 20:19:16 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Swaps the memory of *s1 and *s2. If tofree 
**	isn't 0, *s2 is freed.
** @param:	- [void **] memory to be swapped to *s2
**			- [void **] memory to be swapped to *s1
**			- [short] free condition: non 0 
**				to free *s2 or 0 to not
*/
void	ft_swap(void **s1, void **s2, short tofree)
{
	void	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
	if (tofree)
		ft_free(s2);
}
