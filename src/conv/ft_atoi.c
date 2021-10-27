/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 00:12:40 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/27 11:38:00 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Checks for a minus character ('-').
 * @param	c [char] char to be checked
 * @returns	[short] negative if minus or positive if not
**/
static short	ft_isminus(char c)
{
	if (c == '-')
		return (-1);
	else
		return (1);
}

/**
 * Converts the initial portion of the string pointed to by 'nptr' to int. 
 *	The number is searched after space characters (ft_isspace()) 
 *	and then signals; ends with a non digit character.
 * @param	nptr [const char *] string to be converted
 * @returns [int] number converted from 'nptr'
**/
int	ft_atoi(const char *nptr)
{
	long			num;
	int				signal;
	unsigned int	ct;

	ct = 0;
	while (ft_isspace(nptr[ct]))
		ct++;
	signal = ft_isminus(nptr[ct]);
	if (nptr[ct] == '+' || nptr[ct] == '-')
		ct++;
	if (ft_isdigit(nptr[ct--]))
	{
		num = 0;
		while (ft_isdigit(nptr[++ct]))
		{
			if (num == 214748364 && signal == -1
				&& nptr[ct] == '8' && nptr[ct + 1] == '\0')
				return (-2147483648);
			num = (num * 10) + (nptr[ct] - '0');
		}
		return (((int)num) * signal);
	}
	else
		return (0);
}
