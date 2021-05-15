/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 12:35:39 by tosilva           #+#    #+#             */
/*   Updated: 2021/05/13 14:48:49 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Checks for an uppercase letter.
** @param:	- [int] char to be checked
** @return:	[int] non 0 if uppercase, 0 if not
*/
int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
