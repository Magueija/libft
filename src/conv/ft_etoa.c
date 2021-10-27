/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_etoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:09:10 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/27 13:11:44 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Allocate memory for scientific notation exponent.
 * @param	exp [int] exponent
 * @returns	[char *] string with allocated memory 
**/
static char	*ft_newstrnotation(int exp)
{
	char	*str_notation;
	int		exp_len;

	exp_len = ft_nbdigits(exp);
	if (exp < 0)
		exp = -exp;
	exp_len = ft_ternint(exp < 100, 2, exp_len);
	str_notation = (char *)malloc((2 + exp_len + 1) * sizeof(char));
	if (!str_notation)
		return (NULL);
	return (str_notation);
}

/**
 * Joins the number from scientific notation with its exponent.
 * @param	str_scientific [char *] number from scientific 
 * 							notation without exponent
 * @param	exp [int] exponent
 * @returns	[char *] number in scientific notation
**/
static char	*ft_addnotation(char *str_scientific, int exp)
{
	char	*str_notation;
	char	*str_cn;
	int		ct;

	str_notation = ft_newstrnotation(exp);
	ct = 0;
	str_notation[ct++] = 'e';
	if (exp < 0)
	{
		exp = -exp;
		str_notation[ct++] = '-';
	}
	else
		str_notation[ct++] = '+';
	ct += ft_ternint(exp < 100, 2, ft_nbdigits(exp));
	str_notation[ct--] = 0;
	while (str_notation[ct] != '+' && str_notation[ct] != '-')
	{
		str_notation[ct--] = (exp % 10) + '0';
		exp /= 10;
	}
	str_cn = ft_strjoin(str_scientific, str_notation);
	ft_free((void **)&str_scientific);
	ft_free((void **)&str_notation);
	return (str_cn);
}

/**
 * Converts a long double number to scientific notation (string).
 * @param	n [long double] number to be converted
 * @param	prec [unsigned short] number precision (to round the number)
 * @returns	[char *] number in scientific notation
**/
char	*ft_etoa(long double n, unsigned short prec)
{
	char				*str;
	short				neg;
	int					exp;

	if (ft_isnan(n))
		return (ft_strdup("nan"));
	else if (ft_isinf(n))
		return (ft_strdup("inf"));
	else if (ft_isninf(n))
		return (ft_strdup("-inf"));
	neg = ft_isnegative_float((void *)&n);
	str = ft_ftoscientific(n, neg, prec, &exp);
	if (ft_strchr(str, 'n'))
		return (str);
	return (ft_addnotation(str, exp));
}
