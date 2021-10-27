/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreplace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 10:55:59 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/27 13:08:08 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Replaces the occurrences of 'toreplace' to 
 *	'replacer' in the string 'str'.
 * @param	str [char *] string where the replace happens
 * @param	toreplace [int] character to be replaced
 * @param	replacer [int] character to replace
**/
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
