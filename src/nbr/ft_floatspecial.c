/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_floatspecial.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 09:51:24 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/27 12:08:51 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Checks if a number is not a number (nan).
 * @param	n [long double] number to be checked
 * @returns	[int] non 0 if nan, 0 if not
**/
int	ft_isnan(long double n)
{
	return (n != n);
}

/**
 * Checks if a number is positive infinite (inf).
 * @param	n [long double] number to be checked
 * @returns	[int] non 0 if inf, 0 if not
**/
int	ft_ispinf(long double n)
{
	return (n == (1.0L / 0.0L));
}

/**
 * Checks if a number is negative infinite (-inf).
 * @param	n [long double] number to be checked
 * @returns	[int] non 0 if -inf, 0 if not
**/
int	ft_isninf(long double n)
{
	return (n == (-1.0L / 0.0L));
}

/**
 * Checks if a number is infinite (inf or -inf).
 * @param	n [long double] number to be checked
 * @returns	[int] non 0 if inf, 0 if not
**/
int	ft_isinf(long double n)
{
	return (n == (1.0L / 0.0L));
}
