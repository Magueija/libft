/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 02:03:34 by tosilva           #+#    #+#             */
/*   Updated: 2021/05/13 14:48:04 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Checks whether c is a 7-bit unsigned char 
**	value that fits into the ASCII character set.
** @param:	- [int] char to be checked
** @return:	[int] non 0 if fits, 0 if not
*/
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
