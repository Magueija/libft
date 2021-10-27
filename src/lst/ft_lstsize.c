/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 02:20:07 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/23 13:54:36 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Counts the number of elements in a list.
 * @param	lst [t_list *] the beginning of the list
 * @returns	[int] length of the list
**/
int	ft_lstsize(t_list *lst)
{
	size_t	ct;
	t_list	*list;

	list = lst;
	ct = 0;
	while (list)
	{
		list = list->next;
		ct++;
	}
	return (ct);
}
