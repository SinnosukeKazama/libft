/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skazama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 09:01:39 by skazama           #+#    #+#             */
/*   Updated: 2025/10/27 10:11:46 by skazama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;
	t_list	*ptr_l;

	count = 0;
	ptr_l = lst;
	while (ptr_l != NULL)
	{
		++count;
		ptr_l = ptr_l->next;
	}
	return (count);
}
