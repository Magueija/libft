/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 15:29:19 by tosilva           #+#    #+#             */
/*   Updated: 2021/05/13 19:53:04 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Frees the memory ponted by *pt, if exists, and sets *pt to NULL.
** @param:	- [void **] pointer to a pointer to the memory to be freed
*/
void	ft_free(void **pt)
{
	if (pt && *pt)
		free(*pt);
	*pt = NULL;
}
