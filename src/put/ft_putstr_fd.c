/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 02:33:02 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/27 12:42:10 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Outputs the string 's' to the given file
 *	descriptor.
 * @param	s [char *] the string to output
 * @param	fd [int] the file descriptor on which to write
**/
void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}

/**
 * Outputs a max size 'len' of the string 's' to the 
 *	given file descriptor.
 * @param	s [char *] the string to output
 * @param	max_len [size_t] max size to be written
 * @param	fd [int] the file descriptor on which to write
**/
void	ft_putnstr_fd(char *s, size_t max_len, int fd)
{
	size_t	s_len;

	if (s)
	{
		s_len = ft_strlen(s);
		if (s_len > max_len)
			write(fd, s, max_len);
		else
			write(fd, s, s_len);
	}
}

/**
 * Outputs the string 's' of the forced size 'len' to the 
 *	given file descriptor. If (len > ft_strlen(s)) the 
 *	the program will explode, use ft_putnstr_fd() instead.
 * @param	s [char *] the string to output
 * @param	len [size_t] size to be written
 * @param	fd [int] the file descriptor on which to write
**/
void	ft_putfstr_fd(char *s, size_t len, int fd)
{
	if (s)
		write(fd, s, len);
}
