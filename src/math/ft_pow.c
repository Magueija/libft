/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 08:41:00 by tosilva           #+#    #+#             */
/*   Updated: 2021/05/13 18:56:43 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns the value of n raised to the power of expn.
** @param:	- [short] base number
**			- [unsigned short] exponent
** @return:	[int] n raised to the power of expn
*/
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

/*
** Returns the value of n raised to the power of expn.
** @param:	- [int] base number
**			- [unsigned int] exponent
** @return:	[long] n raised to the power of expn
*/
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

/*
** Returns the value of n raised to the power of expn.
** @param:	- [long] base number
**			- [unsigned long] exponent
** @return:	[long long] n raised to the power of expn
*/
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

/*
** Returns the value of n raised to the power of expn.
** @param:	- [long long] base number
**			- [unsigned long] exponent
** @return:	[long long] n raised to the power of expn
*/
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
