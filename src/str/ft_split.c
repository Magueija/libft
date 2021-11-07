/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 02:58:42 by tosilva           #+#    #+#             */
/*   Updated: 2021/11/07 02:25:08 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_mtxfree(char **mtz, unsigned int rows)
{
	while (rows-- != 0)
		free(mtz[rows]);
	free(mtz);
	mtz = NULL;
	return (mtz);
}

static size_t	ft_rowlen(char const *s, char c)
{
	size_t	max_rows;

	if (*s == c)
		max_rows = 0;
	else
		max_rows = 1;
	while (*s)
	{
		if (*s == c && (*(s + 1) != c && *(s + 1) != '\0'))
			max_rows++;
		s++;
	}
	return (max_rows);
}

static size_t	ft_collen(char const *s, char c)
{
	size_t	max_cols;

	max_cols = 0;
	while (*s && *s != c)
	{
		max_cols++;
		s++;
	}
	return (max_cols);
}

static char	**ft_splitwords(char const *s, char c, size_t *row, size_t *col)
{
	char	**strs;
	size_t	nrrows;

	nrrows = ft_rowlen(s, c);
	strs = (char **)malloc((nrrows + 1) * sizeof(char *));
	while (*s && strs)
	{
		if (*s != c && ((*row == 0 && *col == 0) || *(s - 1) == c))
		{
			if (*col != 0)
				strs[*row][*col] = 0;
			if (*col == 0)
				*row = 0;
			else
				*row = *row + 1;
			strs[*row] = (char *)malloc((ft_collen(s, c) + 1) * sizeof(char));
			if (!strs[*row])
				return (strs = ft_mtxfree(strs, nrrows));
			*col = 0;
		}
		if (*s != c)
			strs[*row][(*col)++] = *s;
		s++;
	}
	return (strs);
}

/**
 * Allocates (with malloc(3)) and returns an array 
 *	of strings obtained by splitting 's' using the 
 *	character 'c' as a delimiter. The array is  
 *	ended with a NULL pointer.
 * @param	s [char const *] the string to be split
 * @param	c [char] the delimiter character
 * @returns	[char **] the array of new strings resulting from the split.
 *				NULL if the allocation fails
**/
char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	row;
	size_t	col;

	if (!s)
		return (NULL);
	row = 0;
	col = 0;
	strs = ft_splitwords(s, c, &row, &col);
	if (!strs)
		return (NULL);
	if (col != 0)
		strs[row++][col] = 0;
	strs[row] = 0;
	return (strs);
}
