/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 02:12:42 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/23 13:49:17 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Converts a long long number to string.
 * @param	n [long long] number to be converted
 * @returns	[char *] long long number converted
**/
char	*ft_llitoa(long long int n)
{
	char	*strnum;
	short	ndig;
	short	neg;

	neg = ft_isnegative((void *)&n);
	ndig = ft_nbdigits(n) + ft_ternint(neg == 2, 1, neg);
	strnum = malloc(sizeof(char) * (ndig + 1));
	if (!strnum)
		return (NULL);
	strnum[0] = '0';
	strnum[ndig] = 0;
	if (neg)
		strnum[0] = '-';
	while (n && --ndig >= 0)
	{
		strnum[ndig] = (n % 10) + ft_ternchar(neg == 2, '1', '0');
		if (neg == 2)
			neg = 1;
		n /= 10;
	}
	return (strnum);
}

/**
 * Converts a short number to string.
 * @param	n [short] number to be converted
 * @returns [char *] short number converted
**/
char	*ft_hitoa(short int n)
{
	return (ft_llitoa((long long int)n));
}

/**
 * Converts an integer to string.
 * @param	n [int] number to be converted
 * @returns	[char *] integer converted
**/
char	*ft_itoa(int n)
{
	return (ft_llitoa((long long int)n));
}

/**
 * Converts a long number to string.
 * @param	n [long] number to be converted
 * @returns	[char *] long number converted
**/
char	*ft_litoa(long int n)
{
	return (ft_llitoa((long long int)n));
}
