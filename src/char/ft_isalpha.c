/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 02:02:57 by tosilva           #+#    #+#             */
/*   Updated: 2021/05/13 14:48:00 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Checks for an alphabetic character.
** @param:	- [int] char to be checked
** @return:	[int] non 0 if alphabetic, 0 if not
*/
int	ft_isalpha(int c)
{
	return (ft_islower(c) || ft_isupper(c));
}
