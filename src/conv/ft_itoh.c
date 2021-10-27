/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoh.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 12:48:36 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/27 11:43:06 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Fill the 'base' with hexadecimal values.
 * @param	base [char *] base to be filled
**/
static void	ft_fillbase(char *base)
{
	short	len_dig;
	short	len_al;
	short	ct_fill;
	char	a_fill;

	len_dig = 10;
	len_al = 6;
	ct_fill = 0;
	a_fill = 'a';
	while (ct_fill < len_dig)
	{
		base[ct_fill] = ct_fill + '0';
		ct_fill++;
	}
	while (ct_fill < len_dig + len_al)
	{
		base[ct_fill++] = a_fill++;
	}
	base[ct_fill] = 0;
}

/**
 * Converts a number to hexadecimal with or without prefix (0x).
 * @param	n [long long] number to be converted
 * @param	has_pfx [short] if prefix is needed
 * @returns	[char *] number converted to hexadecimal
**/
char	*ft_itoh(long long n, short has_pfx)
{
	char	base[17];

	ft_fillbase(base);
	if (!has_pfx)
		return (ft_itoa_base(n, base));
	else
		return (ft_itoa_base_prefix(n, base, "0x"));
}

/**
 * Converts an unsigned number to hexadecimal with or without prefix (0x).
 * @param	n [unsigned long long] number to be converted
 * @param	has_pfx [short] if prefix is needed
 * @returns [char *] number converted to hexadecimal
**/
char	*ft_uitoh(unsigned long long n, short has_pfx)
{
	char	base[17];

	ft_fillbase(base);
	if (!has_pfx)
		return (ft_uitoa_base(n, base));
	else
		return (ft_uitoa_base_prefix(n, base, "0x"));
}
