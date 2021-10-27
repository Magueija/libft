/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 02:19:45 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/27 11:49:46 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Iterates the list 'lst' and applies the function 
 *	'f' to the content of each element. Creates a new 
 *	list resulting of the successive applications of 
 *	the function 'f'. The 'del' function is used to 
 *	delete the content of an element, if needed.
 * @param	lst [t_list *] pointer to an element
 * @param	f [void *(*)(void *)] function used to iterate on the list
 * @param	del [void (*)(void *)] function used to delete the
 *				content of an element if needed
 * @returns	[t_list *] the new list, NULL if the allocation fails
**/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*next_list;
	t_list	*before_list;

	if (!lst || !(*f))
		return (NULL);
	new_list = ft_lstnew((*f)(lst->content));
	if (!new_list)
		return (NULL);
	next_list = new_list;
	before_list = lst->next;
	while (1)
	{
		if (before_list == NULL)
			break ;
		next_list->next = ft_lstnew((*f)(before_list->content));
		if (!next_list)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		before_list = before_list->next;
		next_list = next_list->next;
	}
	return (new_list);
}
