/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 03:02:50 by tosilva           #+#    #+#             */
/*   Updated: 2021/05/15 17:39:42 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Compares the first (at most) n bytes of s1 and s2. 
**	It returns an integer less than, equal to, or greater 
**	than zero if s1 is found, respectively, to be less 
**	than, to match, or be greater than s2.
** @param:	- [const char *] first string to compare
**			- [const char *] second string to compare
**			- [size_t] number of bytes to compare
** @return:	[int] return_value
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	ct;

	ct = 0;
	if (n == 0)
		return (0);
	while (s1[ct] && s2[ct] && ct != n - 1)
	{
		if ((unsigned char)s1[ct] != (unsigned char)s2[ct])
			break ;
		ct++;
	}
	return ((unsigned char)s1[ct] - (unsigned char)s2[ct]);
}
