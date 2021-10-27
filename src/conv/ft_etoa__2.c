/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_etoa__2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 18:08:26 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/27 11:34:35 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_checkneg2(long double *n, int *exp, int neg)
{
	if (neg == 2)
		*n += 1.0L;
	if (*n >= 10.0L)
		*exp += 1;
}

/**
 * Check for specific precisions and round number '*n' one more time.
 * @param	n_original [long double] original number
 * @param	n [long double *] number ready for scientific notation and to round
 * @param	prec [unsigned short] precision
 * @param	exp [int *] exponent
**/
static void	ft_roundprec(long double n_original,
	long double *n, unsigned short prec, int *exp)
{
	long double	n_copy;
	long double	prec_pow;

	if ((int)*n == 9 || (int)((unsigned long long)n_original % 2ULL) == 0)
	{
		n_copy = *n;
		prec_pow = ft_powld(10.0L, prec);
		if ((int)*n == 9 && (int)
			((unsigned long long)(*n * (prec_pow * 10.0L)) % 10ULL) >= 5)
		{
			n_copy += 1.0L / prec_pow;
			if ((int)n_copy == 10)
			{
				*n += 1.0L / prec_pow;
				*n /= 10.0L;
				*exp += 1;
			}
		}
	}
}

/**
 * Converts a long double number to a scientific notation number without exponent
 *	and counts the exponent needed for ft_addnotation().
 * @param	n [long double *] number to convert to scientific notation
 * @param	neg [short] if 'n' was negative
 * @param	prec [unsigned short] precision
 * @param	exp [int *] exponent
 * @returns	[char *] scientific notation number without exponent
**/
char	*ft_ftoscientific(long double n, short neg,
			unsigned short prec, int *exp)
{
	long double	n_original;

	n_original = n;
	*exp = 0;
	if (n > 1.0L)
	{
		while (n >= 10.0L)
		{
			n /= 10.0L;
			*exp += 1;
		}
	}
	else if (n < 1.0L && n > 0.0L)
	{
		while (n < 1.0L)
		{
			n *= 10.0L;
			*exp -= 1;
		}
	}
	ft_checkneg2(&n, exp, neg);
	ft_roundprec(n_original, &n, prec, exp);
	return (ft_ldtoa(ft_ternfloat(neg, -n, n), prec));
}
