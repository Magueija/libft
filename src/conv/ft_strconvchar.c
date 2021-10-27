/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strconvchar.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 11:21:00 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/23 13:40:09 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Modifies a string content with a conversion function (ex. ft_toupper()).
 * @param	s [char *] string to be modified
 * @param	f [int (*)(int)] convertion function
**/
void	ft_strconvchar(char *s, int (*f)(int))
{
	if (!s || !f)
		return ;
	while (*s)
	{
		*s = (*f)(*s);
		s++;
	}
}
