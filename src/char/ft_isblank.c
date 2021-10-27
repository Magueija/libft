/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 13:02:03 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/23 13:48:00 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Checks for a blank character; that is, a space or a tab.
 * @param	c [int] char to be checked
 * @returns	[int] non 0 if blank, 0 if not
**/
int	ft_isblank(int c)
{
	return (c == ' ' || c == '\t');
}
