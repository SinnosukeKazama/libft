/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skazama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:05:45 by skazama           #+#    #+#             */
/*   Updated: 2025/10/29 10:30:24 by skazama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_bonus.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*ptr_l;

	ptr_l = lst;
	if (!lst || !f)
		return ;
	while (ptr_l)
	{
		f(ptr_l->content);
		ptr_l = ptr_l->next;
	}
}
