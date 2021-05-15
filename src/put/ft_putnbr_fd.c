/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 02:32:23 by tosilva           #+#    #+#             */
/*   Updated: 2021/05/14 17:26:06 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Outputs the long long number n to the given file descriptor.
** @param:	- [int] the long long number to output
**			- [int] the file descriptor on which to write
*/
void	ft_putllnbr_fd(long long n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n > 9)
		ft_putllnbr_fd(n / 10, fd);
	ft_putchar_fd((n % 10) + '0', fd);
}

/*
** Outputs the integer n to the given file descriptor.
** @param:	- [int] the  integer to output
**			- [int] the file descriptor on which to write
*/
void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n == -2147483648)
		{
			n = 147483648;
			ft_putchar_fd('2', fd);
			ft_putnbr_fd(n, fd);
			return ;
		}
		else
			n *= -1;
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd((n % 10) + '0', fd);
}
