/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 03:05:24 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/27 11:44:47 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Converts the letter 'c' to upper case, if possible.
 * @param	c [int] letter to be converted
 * @returns	[int] upper case letter or 'c' if 'c' isn't a letter 
**/
int	ft_toupper(int c)
{
	if (ft_islower(c))
		return ((int)c - 32);
	else
		return (c);
}
