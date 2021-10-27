/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 12:35:39 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/23 13:47:54 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Checks for an uppercase letter.
 * @param	c [int] char to be checked
 * @returns	[int] non 0 if uppercase, 0 if not
**/
int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
