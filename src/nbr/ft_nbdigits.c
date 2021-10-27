/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbdigits.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 16:14:10 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/27 12:32:07 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Counts the number of digits of the number 'n'.
 * @param	n [long long] number to be counted
 * @returns	[short] number of digits
**/
short	ft_nbdigits(long long n)
{
	short	ndig;

	if (n == 0)
		ndig = 1;
	else
		ndig = 0;
	while (n != 0)
	{
		ndig++;
		n /= 10;
	}
	return (ndig);
}

/**
 * Counts the number of digits of the unsigned number 'n'.
 * @param	n [unsigned long long] unsigned number to be counted
 * @returns	[short] number of digits
**/
short	ft_nbdigits_unsigned(unsigned long long n)
{
	short	ndig;

	if (n == 0)
		ndig = 1;
	else
		ndig = 0;
	while (n != 0)
	{
		ndig++;
		n /= 10;
	}
	return (ndig);
}

/**
 *  Counts the number of digits, after dot of the number 'n'.
**/
static void
	ft_fnbdigits_ctafter(long double *n, short *nafter, short *ndig)
{
	while (1)
	{
		*nafter += 1;
		if ((int)(*n * 10.0L) == 0)
		{
			*ndig += 1;
			if (*ndig == 6)
			{
				*nafter -= 6;
				break ;
			}
		}
		else
			*ndig = 0;
		*n *= 10.0L;
		*n -= (long double)((int)*n);
		if (ft_isnan(*n) || ft_isinf(*n) || ft_isninf(*n))
			break ;
	}
}

/**
 * Counts the number of digits, after and before dot, 
 *	of the long double number 'n'.
 * @param	n [long double] number to be counted
 * @param	nbefore [short *] pointer to save the number 
 *				of digits before dot
 * @returns	[short] number of digits after dot
**/
short	ft_nbdigits_float(long double n, short *nbefore)
{
	short	nafter;
	short	ndig;

	if (n < 1.0L && n > -1.0L)
		*nbefore = 1;
	else
		*nbefore = 0;
	ndig = 0;
	while ((int)n != 0)
	{
		*nbefore = *nbefore + 1;
		n /= 10.0L;
		ndig++;
	}
	if (ndig)
		n *= (long double)ft_pow(10, ndig);
	n -= (long double)((int)n);
	ndig = 0;
	nafter = 0;
	ft_fnbdigits_ctafter(&n, &nafter, &ndig);
	return (nafter);
}

/**
 * Counts the number of digits of the number 'n' 
 *	with a base of size 'base_len'.
 * @param	n [long long] number to be counted
 * @param	base_len [size_t] base size
 * @returns	[short] number of digits
**/
short	ft_nbdigits_base(long long n, size_t base_len)
{
	short	ndig;

	if (n == 0)
		ndig = 1;
	else
		ndig = 0;
	while (n != 0)
	{
		ndig++;
		n /= base_len;
	}
	return (ndig);
}
