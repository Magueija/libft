/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 03:03:10 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/27 13:04:29 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Calculates the length, at most 'maxlen' bytes, of the string 's', 
 *	excluding the terminating null byte ('\\0').
 * @param	s [const char *] the string to be counted
 * @param	maxlen [size_t] max bytes to be counted
 * @returns	[size_t] the number of bytes in the string 's'
**/
size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t	ch_nr;

	ch_nr = 0;
	while (s[ch_nr] && maxlen--)
		ch_nr++;
	return (ch_nr);
}
