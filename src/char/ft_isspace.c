/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 02:04:37 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/23 13:47:55 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Checks for white-space characters; these are: space, 
 *	form-feed, newline, carriage return, horizontal tab, and vertical tab.
 * @param	c [int] char to be checked
 * @returns	[int] non 0 if white-space, 0 if not
**/
int	ft_isspace(int c)
{
	return (c == ' ' || c == '\f'
		|| c == '\n' || c == '\r'
		|| c == '\t' || c == '\v');
}
