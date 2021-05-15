/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 00:12:40 by tosilva           #+#    #+#             */
/*   Updated: 2021/05/13 13:34:36 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Checks for a minus character ('-').
** @param:	- [char] char to be checked
** @return:	[short] negative if minus or positive if not
*/
static short	ft_isminus(char c)
{
	if (c == '-')
		return (-1);
	else
		return (1);
}

/*
** Converts the initial portion of the string pointed to by nptr to int. 
**	The number is searched after space characters (ft_isspace()) 
**	and then signals; ends with a non digit character.
** @param:	- [const char *] string to be converted
** @return:	[int] number converted from nptr
** Line-by-line comments:
** @48,49,50	because we save the signal in a variable (int signal) 
**				 and ((INT_MIN * -1) > INT_MAX), we can't 
**				 save the number (INT_MIN * -1) in an int, it doesn't fit.
*/
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
