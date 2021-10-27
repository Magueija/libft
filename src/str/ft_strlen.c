/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 03:01:48 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/27 13:01:01 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Calculates the length of the string str, 
 *	excluding the terminating null byte ('\\0').
 * @param	str [const char *] the string to be counted
 * @returns	[size_t] the number of bytes in the string 'str'
**/
size_t	ft_strlen(const char *str)
{
	size_t	ch_nr;

	ch_nr = 0;
	while (str[ch_nr])
		ch_nr++;
	return (ch_nr);
}
