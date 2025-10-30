/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skazama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 09:04:22 by skazama           #+#    #+#             */
/*   Updated: 2025/10/29 09:42:39 by skazama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_bonus.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr_l;
	t_list	*ptr_n;

	ptr_l = *lst;
	while (ptr_l)
	{
		ptr_n = ptr_l->next;
		ft_lstdelone(ptr_l, del);
		ptr_l = ptr_n;
	}
	*lst = NULL;
}
