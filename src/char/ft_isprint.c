/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 02:04:19 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/23 13:47:57 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Checks for any printable character including space.
 * @param	c [int] char to be checked
 * @returns	[int] non 0 if printable, 0 if not
**/
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
