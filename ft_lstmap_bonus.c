/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skazama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:36:38 by skazama           #+#    #+#             */
/*   Updated: 2025/10/29 12:37:01 by skazama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_bonus.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newnode_front;
	t_list	*newnode;
	
	if (!lst || !f || !del)
		return (ft_calloc(1, 1));
	newnode_front = NULL;
	while (lst)
	{
		newnode = ft_lstnew(f(lst->content));
		if (!newnode)
		{
			ft_lstclear(&newnode, del);
			return (NULL);
		}
		ft_lstadd_back(&newnode_front, newnode);
		lst = lst->next;
	}
	return (newnode_front);
}
/*
どこで”必要に応じてdel();を適応”するのか？？
f:lst_>contentに適応される。任意の機能のために。
del:lst_>content適応される。lst->contentの削除のために。
*/
