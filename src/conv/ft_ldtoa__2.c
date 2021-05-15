/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ldtoa__2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:27:01 by tosilva           #+#    #+#             */
/*   Updated: 2021/05/15 18:04:21 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Round before dot number.
** @param:	- [char **] before dot number
**			- [short] before dot number lenght
*/
static void	ft_roundbefore(char **str, short nbefore)
{
	char	*temp;
	int		has_minus;
	short	ct;

	has_minus = (int)((long long)ft_strchr(*str, '-'));
	ct = 1;
	(*str)[nbefore - ct] += 1;
	while ((*str)[nbefore - ct] > '9' && (*str)[nbefore - ct] != '-')
	{
		(*str)[nbefore - ct] = '0';
		if (ct == nbefore || (has_minus && ct == nbefore - 1))
		{
			temp = ft_strjoin("1", *str);
			if (has_minus)
			{
				temp[0] = '-';
				temp[1] = '1';
			}
			ft_swap((void **)str, (void **)&temp, 1);
			break ;
		}
		(*str)[nbefore - ++ct] += 1;
	}
}

/*
** Round after dot number and, if needed, round 
**	before dot number with ft_roundbefore().
** @param:	- [char **] after dot number
**			- [short] precision
**			- [short] before dot number lenght
*/
static void	ft_roundafter(char **str, short prec, short nbefore)
{
	short	ct;

	prec += nbefore;
	ct = 0;
	(*str)[prec - ct] += 1;
	while ((*str)[prec - ct] > '9')
	{
		(*str)[prec - ct] = '0';
		if ((*str)[prec - ct - 1] == '.')
		{
			ft_roundbefore(str, nbefore);
			break ;
		}
		(*str)[prec - ++ct] += 1;
	}
}

/*
** If the number has 0s (zeros) then add them to *str. 
**	Needed because 0s were skipped. 
** @param:	- [char *] destination; before dot number converted
**			- [size_t *] position to add the 0 (zero)
**			- [short] before dot number lenght
**			- [short] before dot number lenght without 0s (zeros)
*/
static void
	ft_checkforzeros(char *str, size_t *ct, short *nbefore, short newbefore_len)
{
	if (newbefore_len < *nbefore)
	{
		ft_memset(&str[*ct], '0', (*nbefore - newbefore_len) * sizeof(char));
		*ct += *nbefore - newbefore_len;
		*nbefore = newbefore_len;
	}
}

/*
** Convert the before dot number to string.
** @param:	- [char *] destination; before dot number converted
**			- [long double] number to be converted
**			- [short] before dot number lenght
**			- [short] if *n was negative
*/
void	ft_fillbefore_str_ldtoa(char *str,
			long double *n, short nbefore, short neg)
{
	long double	n1;
	long double	power;
	short		newbefore_len;
	int			num;
	size_t		ct;

	if (neg)
		str[0] = '-';
	ct = ft_ternint(neg == 2, 1, neg);
	newbefore_len = nbefore;
	while (nbefore-- > 0)
	{
		ft_checkforzeros(str, &ct, &nbefore, --newbefore_len);
		power = ft_powld(10.0L, (unsigned long)nbefore);
		n1 = *n;
		n1 /= power;
		num = (int)n1;
		str[ct++] = num + '0';
		*n = *n - ((long double)num * power);
		if (nbefore != 0)
			ft_nbdigits_float(*n, &newbefore_len);
	}
	if (neg == 2)
		str[ct - 1]++;
}

/*
** Join before dot string and the converted after dot number.
** @param:	- [char *] string with number before dot
**			- [long double] number without before dot value
**			- [short] number precision (to round the number)
**			- [short] before dot number lenght
** @return:	[char *] before dot and after dot numbers; n converted
*/
char	*ft_fillafter_str_ldtoa(char *str,
			long double n, short prec, short nbefore)
{
	int		num;
	short	ct;

	num = 0;
	ct = 1;
	while (ct < prec + 1)
	{
		n *= 10.0L;
		num = (int)n;
		str[nbefore + ct++] = num + '0';
		n -= (long double)num;
	}
	n *= 10.0L;
	num += ft_ternint((int)(n) >= 5, 1, 0);
	if (num == 10)
	{
		num = 0;
		ft_roundafter(&str, prec, nbefore);
	}
	else if (prec)
		str[nbefore + ct - 1] = num + '0';
	if (!(prec == 0 && (int)(str[nbefore - 1] - '0') % 2 == 0 && n == 5.0))
		if (prec == 0 && (int)(n) >= 5)
			ft_roundbefore(&str, nbefore);
	return (str);
}
