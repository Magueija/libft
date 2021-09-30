/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issignal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 13:33:59 by tosilva           #+#    #+#             */
/*   Updated: 2021/09/30 13:42:44 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Checks if a char is a plus(+) or a minus(-) signal.
** @param:	- [int] char to be checked
** @return:	[int] non 0 if signal, 0 if not
*/
int	ft_issignal(int c)
{
	return (c == '+' || c == '-');
}
