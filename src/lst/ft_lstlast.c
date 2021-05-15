/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 02:19:29 by tosilva           #+#    #+#             */
/*   Updated: 2021/05/13 18:43:09 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns the last element of the list.
** @param:	- [t_list *] the beginning of the list
** @return:	[t_list *] last element of the list
*/
t_list	*ft_lstlast(t_list *lst)
{
	size_t	ct;
	t_list	*list;

	if (!lst)
		return (NULL);
	list = lst;
	ct = 0;
	while (list->next != NULL)
	{
		list = list->next;
		ct++;
	}
	return (list);
}
