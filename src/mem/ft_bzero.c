/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 00:52:08 by tosilva           #+#    #+#             */
/*   Updated: 2021/05/13 20:13:29 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Sets the first n bytes of the area 
**	starting at s to zero (bytes containing char '\\0').
** @param:	- [void *] start of the memory to be zeroed
**			- [size_t] size of the memory to be zeroed
*/
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
