/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skazama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 10:12:26 by skazama           #+#    #+#             */
/*   Updated: 2025/10/27 10:34:33 by skazama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	t_list	*ptr_l;

	ptr_l = lst;
	if (ptr_l == NULL)
		return (NULL);
	while (ft_lstsize(ptr_l) - 1)
	{
		ptr_l = ptr_l->next;
	}
	return (ptr_l);
}
