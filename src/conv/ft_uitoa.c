/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:47:46 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/23 13:49:07 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Converts an unsigned long long number to string.
 * @param	n [unsigned long long] number to be converted
 * @returns	[char *] unsigned long long number converted
**/
char	*ft_ullitoa(unsigned long long int n)
{
	char	*strnum;
	short	ndig;

	ndig = ft_nbdigits_unsigned(n);
	strnum = malloc(sizeof(char) * (ndig + 1));
	if (!strnum)
		return (NULL);
	strnum[0] = '0';
	strnum[ndig] = 0;
	while (n && --ndig >= 0)
	{
		strnum[ndig] = (n % 10) + '0';
		n /= 10;
	}
	return (strnum);
}

/**
 * Converts an unsigned short number to string.
 * @param	n [unsigned short] number to be converted
 * @returns	[char *] unsigned short number converted
**/
char	*ft_uhitoa(unsigned short int n)
{
	return (ft_ullitoa((unsigned long long int)n));
}

/**
 * Converts an unsigned integer to string.
 * @param	n [unsigned int] number to be converted
 * @returns	[char *] unsigned integer converted
**/
char	*ft_uitoa(unsigned int n)
{
	return (ft_ullitoa((unsigned long long int)n));
}

/**
 * Converts an unsigned long number to string.
 * @param	n [unsigned long] number to be converted
 * @returns	[char *] unsigned long number converted
**/
char	*ft_ulitoa(unsigned long int n)
{
	return (ft_ullitoa((unsigned long long int)n));
}
