/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_powf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 08:45:01 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/23 14:24:48 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Returns the value of 'n' raised to the power of 'expn'.
 * @param	n [float] base number
 * @param	expn [unsigned long] exponent
 * @returns	[double] 'n' raised to the power of 'expn'
**/
double	ft_powf(float n, unsigned long expn)
{
	double	nbr;

	nbr = (double)n;
	if (expn == 0)
		return (1);
	while (--expn)
		nbr *= (double)n;
	return (nbr);
}

/**
 * Returns the value of 'n' raised to the power of 'expn'.
 * @param	n [double] base number
 * @param	expn [unsigned long] exponent
 * @returns	[long double] 'n' raised to the power of 'expn'
**/
long double	ft_powd(double n, unsigned long expn)
{
	long double	nbr;

	nbr = (long double)n;
	if (expn == 0)
		return (1);
	while (--expn)
		nbr *= (long double)n;
	return (nbr);
}

/**
 * Returns the value of 'n' raised to the power of 'expn'.
 * @param	n [long double] base number
 * @param	expn [unsigned long] exponent
 * @returns	[long double] 'n' raised to the power of 'expn'
**/
long double	ft_powld(long double n, unsigned long expn)
{
	long double	nbr;

	nbr = n;
	if (expn == 0)
		return (1);
	while (--expn)
		nbr *= n;
	return (nbr);
}
