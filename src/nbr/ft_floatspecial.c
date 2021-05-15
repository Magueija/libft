/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_floatspecial.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 09:51:24 by tosilva           #+#    #+#             */
/*   Updated: 2021/05/15 19:32:07 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Checks if a number is not a number (nan).
** @param:	- [long double] number to be checked
** @return:	[type] non 0 if nan, 0 if not
*/
int	ft_isnan(long double n)
{
	return (n != n);
}

/*
** Checks if a number is positive infinite (inf).
** @param:	- [long double] number to be checked
** @return:	[type] non 0 if inf, 0 if not
*/
int	ft_ispinf(long double n)
{
	return (n == (1.0L / 0.0L));
}

/*
** Checks if a number is negative infinite (-inf).
** @param:	- [long double] number to be checked
** @return:	[type] non 0 if -inf, 0 if not
*/
int	ft_isninf(long double n)
{
	return (n == (-1.0L / 0.0L));
}

/*
** Checks if a number is infinite (inf or -inf).
** @param:	- [long double] number to be checked
** @return:	[type] non 0 if inf, 0 if not
*/
int	ft_isinf(long double n)
{
	return (n == (1.0L / 0.0L));
}
