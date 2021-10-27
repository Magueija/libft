/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 03:05:08 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/27 11:44:36 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Converts the letter 'c' to lower case, if possible.
 * @param	c [int] letter to be converted
 * @returns	[int] lower case letter or 'c' if 'c' isn't a letter 
**/
int	ft_tolower(int c)
{
	if (ft_isupper(c))
		return ((int)c + 32);
	else
		return (c);
}
