/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreplace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 10:55:59 by tosilva           #+#    #+#             */
/*   Updated: 2021/05/15 17:56:02 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Replaces the occurrences of toreplace to 
**	in replacer the string str.
** @param:	- [char *] string where the replace happens
**			- [int] character to be replaced
**			- [int] character to replace
*/
void	ft_strreplace(char *str, int toreplace, int replacer)
{
	size_t	ct;

	ct = 0;
	while (str[ct])
	{
		if (str[ct] == toreplace)
			str[ct] = replacer;
		ct++;
	}
}
