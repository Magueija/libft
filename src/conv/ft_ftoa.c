/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 15:18:36 by tosilva           #+#    #+#             */
/*   Updated: 2021/05/13 14:21:57 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Converts a float number to string.
** @param:	- [float] number to be converted
**			- [unsigned short] number precision (to round the number)
** @return:	[char *] float number converted
*/
char	*ft_ftoa(float n, unsigned short prec)
{
	return (ft_ldtoa((long double)n, prec));
}

/*
** Converts a double number to string.
** @param:	- [double] number to be converted
**			- [unsigned short] number precision (to round the number)
** @return:	[char *] double number converted
*/
char	*ft_dtoa(double n, unsigned short prec)
{
	return (ft_ldtoa((long double)n, prec));
}
