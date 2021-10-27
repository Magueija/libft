/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 12:35:53 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/27 11:43:19 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Fill the 'base' with octal values.
 * @param	base [char *] base to be filled
**/
static void	ft_fillbase(char *base)
{
	short	len;
	short	ct_fill;

	len = 8;
	ct_fill = 0;
	while (ct_fill < len)
	{
		base[ct_fill] = ct_fill + '0';
		ct_fill++;
	}
	base[ct_fill] = 0;
}

/**
 * Converts a number to octal with or without prefix (0).
 * @param	n [long long] number to be converted
 * @param	has_pfx [short] if prefix is needed
 * @returns [char *] number converted to octal
**/
char	*ft_itoo(long long n, short has_pfx)
{
	char	base[9];

	ft_fillbase(base);
	if (!has_pfx)
		return (ft_itoa_base(n, base));
	else
		return (ft_itoa_base_prefix(n, base, "0"));
}

/**
 * Converts an unsigned number to octal with or without prefix (0).
 * @param	n [unsigned long long] number to be converted
 * @param	has_pfx [short] if prefix is needed
 * @returns	[char *] number converted to octal
**/
char	*ft_uitoo(unsigned long long n, short has_pfx)
{
	char	base[9];

	ft_fillbase(base);
	if (!has_pfx)
		return (ft_uitoa_base(n, base));
	else
		return (ft_uitoa_base_prefix(n, base, "0"));
}
