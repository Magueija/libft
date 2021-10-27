/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 17:30:06 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/23 13:48:23 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_retval(ssize_t rd, char **line, char **str, char **temp)
{
	if (rd == FD_EOF)
	{
		*line = ft_strdup(*str);
		ft_free((void **)str);
		return (0);
	}
	else if (rd > FD_EOF)
		*line = ft_substr(*str, 0, (size_t)(ft_strchr(*str, '\n') - *str));
	else
	{
		ft_free((void **)str);
		return (-1);
	}
	*temp = ft_strdup(*str + ft_strlen(*line) + 1);
	if (!*temp)
	{
		ft_free((void **)str);
		return (-1);
	}
	ft_free((void **)str);
	*str = *temp;
	return (1);
}

/**
 * With a static variable, reads each line of a file until EOF (FD_EOF). 
 *	Every time this function is called it returns the next 
 *	line of the file. It can be used on multiple file 
 *	descriptors at the same time. The BUFFER_SIZE can be changed 
 *	during the compilation using the flag -D (gcc -D BUFFER_SIZE=42).
 * @param	fd [int] file descriptor
 * @param	line [char **] dest: pointer to a string (char *)
 * @returns	[int] 1 if read, 0 if the end of 
 *	the file is reached, -1 if an error occurs
**/
int	get_next_line(int fd, char **line)
{
	char		buf[BUFFER_SIZE + 1];
	static char	*str[10241];
	char		*temp;
	ssize_t		rd;

	str[10240] = NULL;
	if (!line || fd < 0 || fd > 10240 || BUFFER_SIZE <= 0)
		return (-1);
	if (str[fd] == NULL)
		str[fd] = ft_calloc(1, sizeof(char));
	rd = 1;
	while (!ft_strchr(str[fd], '\n') && rd > FD_EOF)
	{
		rd = read(fd, buf, BUFFER_SIZE);
		buf[rd] = 0;
		temp = ft_strjoin(str[fd], buf);
		ft_free((void **)&str[fd]);
		str[fd] = temp;
	}
	return (ft_retval(rd, line, &str[fd], &temp));
}
