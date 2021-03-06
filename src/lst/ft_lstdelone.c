/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <tosilva@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 02:18:55 by tosilva           #+#    #+#             */
/*   Updated: 2021/10/27 11:48:32 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Takes as a parameter an element and frees the 
 *	memory of the elements content using the function 
 *	'del' given as a parameter and free the element. 
 *	The memory of next isn't freed.
 * @param	lst [t_list *] the element to free
 * @param	del [void (*)(void *)] function used to delete the content
**/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}
