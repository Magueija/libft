/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 02:31:42 by tosilva           #+#    #+#             */
/*   Updated: 2021/05/14 17:17:49 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Outputs the character c to the given file descriptor.
** @param:	- [char] the character to output
**			- [int] the file descriptor on which to write
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
