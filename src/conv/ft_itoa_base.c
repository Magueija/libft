/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 12:02:22 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/27 11:46:34 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Converts a number to a given base.
 * @param	n [long long] number to be converted
 * @param	base [char *] conversion base
 * @param	base_len [size_t *] base length
 * @returns	[char *] number converted
**/
static char	*ft_convnum(long long n, char *base, size_t *base_len)
{
	char	*strnum;
	short	ndig;
	short	neg;

	neg = ft_isnegative((void *)&n);
	ndig = ft_nbdigits_base(n, *base_len) + neg;
	strnum = malloc(sizeof(char) * (ndig + 1));
	if (!strnum)
		return (NULL);
	strnum[0] = '0';
	strnum[ndig] = 0;
	if (neg)
		strnum[0] = '-';
	while (n && --ndig >= 0)
	{
		strnum[ndig] = base[(n % *base_len)];
		n /= *base_len;
	}
	return (strnum);
}

/**
 * Converts a number to a given base with a base prefix 
 * @param	n [long long] number to be converted
 * @param	base [char *] conversion base
 * @param	base_len [size_t *] base length
 * @param	pfx [char *] base prefix
 * @returns	[char *] number converted with prefix
**/
static char
	*ft_convnum_prefix(long long n, char *base, size_t *base_len, char *pfx)
{
	char	*strnum;
	short	ndig;
	short	neg;
	size_t	ct;

	neg = ft_isnegative((void *)&n);
	ndig = ft_strlen(pfx) + ft_nbdigits_base(n, *base_len) + neg;
	strnum = malloc(sizeof(char) * (ndig + 1));
	if (!strnum)
		return (NULL);
	ct = 0;
	while (*pfx)
		strnum[ct++] = *pfx++;
	strnum[ct] = '0';
	strnum[ndig] = 0;
	if (neg)
		strnum[0] = '-';
	while (n && --ndig >= 0)
	{
		strnum[ndig] = base[(n % *base_len)];
		n /= *base_len;
	}
	return (strnum);
}

/**
 * Check if the base is valid; that is, not empty, 
 *	and without signals and duplicate values.
 * @param	base [char *] base to be checked
 * @param	base_len [size_t *] base length
 * @returns	[short] 1 if valid, 0 if not
**/
short	ft_isvalidbase(char *base, size_t *base_len)
{
	char	*temp;
	size_t	ct;

	temp = base;
	*base_len = 0;
	while (base[*base_len])
	{
		if (base[*base_len] == '+' || base[*base_len] == '-')
			return (0);
		ct = 0;
		while (temp[ct])
		{
			if (ct != *base_len && temp[ct] == base[*base_len])
				return (0);
			ct++;
		}
		*base_len += 1;
	}
	if (*base_len > 1)
		return (1);
	return (0);
}

/**
 * Converts a number to a given base
 *	but first check if the base is valid.
 * @param	n [long long] number to be converted
 * @param	base [char *] conversion base
 * @returns	[char *] number converted
**/
char	*ft_itoa_base(long long n, char *base)
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
 * Converts a number to a given base with a base prefix 
 *	but first check if the base is valid.
 * @param	n [long long] number to be converted
 * @param	base [char *] conversion base
 * @param	pfx [char *] base prefix
 * @returns	[char *] number converted with prefix
**/
char	*ft_itoa_base_prefix(long long n, char *base, char *pfx)
{
	char	*str;
	size_t	base_len;

	if (ft_isvalidbase(base, &base_len))
		str = ft_convnum_prefix(n, base, &base_len, pfx);
	else
		return (NULL);
	return (str);
}
