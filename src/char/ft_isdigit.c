/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 02:04:02 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/23 13:47:59 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Checks for a digit (0 through 9).
 * @param	c [int] char to be checked
 * @returns	[int] non 0 if digit, 0 if not
**/
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
