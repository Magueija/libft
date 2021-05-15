/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strconvchar.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 11:21:00 by tosilva           #+#    #+#             */
/*   Updated: 2021/05/15 17:30:55 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Modifies a string content with a convertion funtion (ex. ft_toupper()).
** @param:	- [char *] string to be modified
**			- [int (*)(int)] convertion funtion
*/
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
