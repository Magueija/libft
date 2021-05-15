/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 02:15:54 by tosilva           #+#    #+#             */
/*   Updated: 2021/05/15 18:01:04 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Adds the element new at the end of the list.
** @param:	- [t_list **] pointer to the first link of a list
**			- [t_list *] pointer to the element to be added
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*list;

	if (new)
	{
		if (!*lst)
			*lst = new;
		else
		{
			list = ft_lstlast(*lst);
			if (list)
				list->next = new;
		}
	}
}
