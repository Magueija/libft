/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_etoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:09:10 by tosilva           #+#    #+#             */
/*   Updated: 2021/05/13 13:54:57 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocate memory for cientific notation exponent.
** @param:	- [int] exponent
** @return:	[char *] string with allocated memory 
*/
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

/*
** Joins the number from cientific notation with its exponent.
** @param:	- [char *] number from cientific notation without exponent
**			- [int] exponent
** @return:	[char *] number in cientific notation
*/
static char	*ft_addnotation(char *str_cientific, int exp)
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
	str_cn = ft_strjoin(str_cientific, str_notation);
	ft_free((void **)&str_cientific);
	ft_free((void **)&str_notation);
	return (str_cn);
}

/*
** Converts a long double number to cientific notation (string).
** @param:	- [long double] number to be converted
**			- [unsigned short] number precision (to round the number)
** @return:	[char *] number in cientific notation
*/
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
	str = ft_ftocientific(n, neg, prec, &exp);
	if (ft_strchr(str, 'n'))
		return (str);
	return (ft_addnotation(str, exp));
}
