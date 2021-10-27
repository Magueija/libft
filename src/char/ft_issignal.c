/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issignal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 13:33:59 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/23 13:47:56 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Checks if a char is a plus(+) or a minus(-) signal.
 * @param	c [int] char to be checked
 * @returns	[int] non 0 if signal, 0 if not
**/
int	ft_issignal(int c)
{
	return (c == '+' || c == '-');
}
