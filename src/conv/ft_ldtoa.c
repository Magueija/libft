/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ldtoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:05:04 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/23 13:49:11 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Replaces spaces with 0 (after dot right zeros) and 
 *	adds the minus signal in special cases. 
 * @param	str [char *] long double number converted without after dot right zeros
 * @param	n [long double] original number
 * @returns	[char *] number converted with after dot right zeros 
 * 				and minus signal if needed
**/
static char	*ft_zerosandneg(char *str, long double n)
{
	char	*temp;

	if (ft_strchr(str, ' '))
		ft_strreplace(str, ' ', '0');
	if ((n == -0.0L) && ft_isninf(1 / n) && !ft_strchr(str, '-'))
	{
		temp = ft_strjoin("-", str);
		ft_swap((void **)&str, (void **)&temp, 1);
	}
	return (str);
}

/**
 * Converts a long double number to string.
 * @param	n [long double] number to be converted
 * @param	prec [unsigned short] number precision (to round the number)
 * @returns	[char *] long double number converted
**/
char	*ft_ldtoa(long double n, unsigned short prec)
{
	char	*str;
	short	nbefore;
	short	ndig;
	short	neg;

	if (ft_isnan(n))
		return (ft_strdup("nan"));
	else if (ft_isinf(n))
		return (ft_strdup("inf"));
	else if (ft_isninf(n))
		return (ft_strdup("-inf"));
	neg = ft_isnegative_float((void *)&n);
	ft_nbdigits_float(n, &nbefore);
	ndig = nbefore + ft_ternint(prec, 1 + prec, 0)
		+ ft_ternint(neg == 2, 1, neg);
	str = (char *)ft_malloc((ndig + 1), sizeof(char));
	if (!str)
		return (NULL);
	str[0] = '0';
	ft_fillbefore_str_ldtoa(str, &n, nbefore, neg);
	if (prec != 0)
		str[nbefore + ft_ternint(neg == 2, 1, neg)] = '.';
	str = ft_fillafter_str_ldtoa(str, n, prec,
			nbefore + ft_ternint(neg == 2, 1, neg));
	return (ft_zerosandneg(str, n));
}
