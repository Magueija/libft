/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 09:34:34 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/27 11:46:46 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Converts an unsigned number to a given base.
 * @param	n [unsigned long long] unsigned number to be converted
 * @param	base [char *] conversion base
 * @param	base_len [size_t *] base length
 * @returns	[char *] unsigned number converted
**/
static char	*ft_convnum(unsigned long long n, char *base, size_t *base_len)
{
	char	*strnum;
	short	ndig;

	ndig = ft_nbdigits_base(n, *base_len);
	strnum = malloc(sizeof(char) * (ndig + 1));
	if (!strnum)
		return (NULL);
	strnum[0] = '0';
	strnum[ndig] = 0;
	while (n && --ndig >= 0)
	{
		strnum[ndig] = base[(n % *base_len)];
		n /= *base_len;
	}
	return (strnum);
}

/**
 * Converts an unsigned number to a given base with base prefix 
 * @param	n [unsigned long long] unsigned number to be converted
 * @param	base [char *] conversion base
 * @param	base_len [size_t *] base length
 * @param	pfx [char *] base prefix
 * @returns	[char *] unsigned number converted with prefix
**/
static char	*ft_convnum_prefix(unsigned long long n,
				char *base, size_t *base_len, char *pfx)
{
	char	*strnum;
	short	ndig;
	size_t	ct;

	ndig = ft_strlen(pfx) + ft_nbdigits_base(n, *base_len);
	strnum = malloc(sizeof(char) * (ndig + 1));
	if (!strnum)
		return (NULL);
	ct = 0;
	while (*pfx)
		strnum[ct++] = *pfx++;
	strnum[ct] = '0';
	strnum[ndig] = 0;
	while (n && --ndig >= 0)
	{
		strnum[ndig] = base[(n % *base_len)];
		n /= *base_len;
	}
	return (strnum);
}

/**
 * Converts an unsigned number to a given base
 *	but first check if the base is valid.
 * @param	n [unsigned long long] unsigned number to be converted
 * @param	base [char *] conversion base
 * @returns	[char *] number converted
**/
char	*ft_uitoa_base(unsigned long long n, char *base)
{
	char	*str;
	size_t	base_len;

	if (ft_isvalidbase(base, &base_len))
		str = ft_convnum(n, base, &base_len);
	else
		return (NULL);
	return (str);
}

/**
 * Converts an unsigned number to a given base with base prefix 
 *	but first check if the base is valid.
 * @param	n [unsigned long long] unsigned number to be converted
 * @param	base [char *] conversion base
 * @param	pfx [char *] base prefix
 * @returns	[char *] number converted with prefix
**/
char	*ft_uitoa_base_prefix(unsigned long long n, char *base, char *pfx)
{
	char	*str;
	size_t	base_len;

	if (ft_isvalidbase(base, &base_len))
		str = ft_convnum_prefix(n, base, &base_len, pfx);
	else
		return (NULL);
	return (str);
}
