/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wctostr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 17:50:19 by tosilva           #+#    #+#             */
/*   Updated: 2021/05/13 15:31:00 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static short	ft_wctostr__2(wchar_t c, unsigned char *str)
{
	if (c < 0x010000)
	{
		str[0] = ((c >> 12) & 0x0F) | 0xE0;
		str[1] = ((c >> 6 ) & 0x3F) | 0x80;
		str[2] = ((c >> 0 ) & 0x3F) | 0x80;
		str[3] = 0;
		return (3);
	}
	else if (c < 0x110000)
	{
		str[0] = ((c >> 18) & 0x07) | 0xF0;
		str[1] = ((c >> 12) & 0x3F) | 0x80;
		str[2] = ((c >> 6 ) & 0x3F) | 0x80;
		str[3] = ((c >> 0 ) & 0x3F) | 0x80;
		str[4] = 0;
		return (4);
	}
	else
		return (0);
}

/*
** Converts a wide character to a string composed of single-byte characters.
** \'
** The UTF format can be composed of 1 to 4 bytes, depending where the binary
**	lands in the hex ranges:
**	- 1-byte UTF range: 0 to 7F
**	- 2-byte UTF range: 80 to 7FF
**	- 3-byte UTF range: 800 to FFFF
**	- 4-byte UTF range: 10000 to 10FFFF
** Masks per types of UTF:
**	- 1-byte UTF: 0xxx xxxx
**	- 2-byte UTF: 110x xxxx | 10xx xxxx
**	- 3-byte UTF: 1110 xxxx | 10xx xxxx | 10xx xxxx
**	- 4-byte UTF: 1111 0xxx | 10xx xxxx | 10xx xxxx | 10xx xxxx
** @param:	- [wchar_t] wide char to converted
** @return:	- [char *] wide char converted into single char string
*/
char	*ft_wctostr(wchar_t c)
{
	unsigned char	str[5];
	short			len;

	if (c < 0x80)
	{
		str[0] = ((c >> 0) & 0x7F) | 0x00;
		str[1] = 0;
		len = 1;
	}
	else if (c < 0x0800)
	{
		str[0] = ((c >> 6) & 0x1F) | 0xC0;
		str[1] = ((c >> 0) & 0x3F) | 0x80;
		str[2] = 0;
		len = 2;
	}
	else
		len = ft_wctostr__2(c, str);
	if (len == 0)
		return (NULL);
	return (ft_strdup((char *)str));
}

/*
** Converts wide char string to single char string.
** @param:	- [wchar_t *] wide char string to be converted
** @return:	- [char *] wide char string converted into single char string
*/
char	*ft_strwctostr(wchar_t *wstr)
{
	char	*str;
	char	*temp;
	char	*str_conv;

	if (!wstr)
		return (NULL);
	str = NULL;
	temp = ft_malloc(1, sizeof(char));
	if (!temp)
		return (NULL);
	while (*wstr != 0)
	{
		str_conv = ft_wctostr(*wstr++);
		str = ft_strjoin(temp, str_conv);
		ft_free((void **)&str_conv);
		ft_free((void **)&temp);
		temp = str;
		if (!str)
			break ;
	}
	if (temp && temp != str)
		ft_free((void **)&temp);
	if (!str)
		return (ft_strdup(""));
	return (str);
}
