/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 03:01:48 by tosilva           #+#    #+#             */
/*   Updated: 2021/05/15 17:29:15 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Calculates the length of the string s, 
**	excluding the terminating null byte ('\\0').
** @param:	- [const char *] the string to be counted
** @return:	[size_t] the number of bytes in the string s
*/
size_t	ft_strlen(const char *str)
{
	size_t	ch_nr;

	ch_nr = 0;
	while (str[ch_nr])
		ch_nr++;
	return (ch_nr);
}
