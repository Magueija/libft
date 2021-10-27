/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 12:36:26 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/23 13:47:57 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Checks for a lower-case letter.
 * @param	c [int] char to be checked
 * @returns	[int] non 0 if lower, 0 if not
**/
int	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
