/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 02:18:07 by tosilva           #+#    #+#             */
/*   Updated: 2021/05/15 18:01:20 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Deletes and frees the given element and every 
**	successor of that element, using the function del 
**	and free(3). Finally, the pointer to the list is set to NULL.
** @param:	- [t_list **] pointer to an element
**			- [void (*)(void *)] function used to delete the
**				content of the element
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*list;
	t_list	*lstfree;

	if (!lst)
		return ;
	list = *lst;
	while (list)
	{
		lstfree = list;
		list = list->next;
		ft_lstdelone(lstfree, del);
	}
	*lst = NULL;
}
