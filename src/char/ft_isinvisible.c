/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isinvisible.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 16:32:18 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/23 13:47:58 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Checks for an invisible character that fits into the ASCII character set.
 * @param	c [int] char to be checked
 * @returns	[int] non 0 if invisible, 0 if not
**/
int	ft_isinvisible(int c)
{
	return ((ft_isascii(c) && !ft_isprint(c))
		|| c == ' ');
}
