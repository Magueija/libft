/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 08:41:00 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/23 14:21:45 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Returns the value of 'n' raised to the power of 'expn'.
 * @param	n [short] base number
 * @param	expn [unsigned short] exponent
 * @returns	[int] 'n' raised to the power of 'expn'
**/
int	ft_powh(short n, unsigned short expn)
{
	int	nbr;

	nbr = (int)n;
	if (expn == 0)
		return (1);
	while (--expn)
		nbr *= (int)n;
	return (nbr);
}

/**
 * Returns the value of 'n' raised to the power of 'expn'.
 * @param	n [int] base number
 * @param	expn [unsigned int] exponent
 * @returns	[long] 'n' raised to the power of 'expn'
**/
long	ft_pow(int n, unsigned int expn)
{
	long	nbr;

	nbr = (long)n;
	if (expn == 0)
		return (1);
	while (--expn)
		nbr *= (long)n;
	return (nbr);
}

/**
 * Returns the value of 'n' raised to the power of 'expn'.
 * @param	n [long] base number
 * @param	expn [unsigned long] exponent
 * @returns	[long long] 'n' raised to the power of 'expn'
**/
long long	ft_powl(long n, unsigned long expn)
{
	long long	nbr;

	nbr = (long long)n;
	if (expn == 0)
		return (1);
	while (--expn)
		nbr *= (long long)n;
	return (nbr);
}

/**
 * Returns the value of 'n' raised to the power of 'expn'.
 * @param	n [long long] base number
 * @param	expn [unsigned long] exponent
 * @returns	[long long] 'n' raised to the power of 'expn'
**/
long long	ft_powll(long long n, unsigned long expn)
{
	long long	nbr;

	nbr = n;
	if (expn == 0)
		return (1);
	while (--expn)
		nbr *= n;
	return (nbr);
}
