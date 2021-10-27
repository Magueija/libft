/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_rec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 02:12:42 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/23 13:49:18 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_recitoa(int n, char *str)
{
	if (n == 0)
		*str = '0';
	else if (n == -2147483648)
	{
		*str++ = '-';
		*str++ = '2';
		str = ft_recitoa(147483648, str);
	}
	else
	{
		if (n < 0)
		{
			*str++ = '-';
			n *= -1;
		}
		str = ft_recitoa(n / 10, str);
		*str++ = (n % 10) + '0';
	}
	return (str);
}

/**
 * Converts an integer to string recursively.
 * @param	n [int] number to be converted
 * @returns	[char *] number converted
**/
char	*ft_itoa_rec(int n)
{
	char	*strnum;
	int		num;
	short	ndig;
	short	neg;

	num = n;
	if (n < 0)
		neg = 1;
	else
		neg = 0;
	ndig = 1;
	while (num != 0)
	{
		num = num / 10;
		ndig++;
	}
	strnum = malloc(sizeof(char) * (ndig + neg + 1));
	if (!strnum)
		return (NULL);
	ft_recitoa(n, strnum);
	strnum[ndig + neg] = '\0';
	return (strnum);
}
