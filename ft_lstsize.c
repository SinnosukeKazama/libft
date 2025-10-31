/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skazama <skazama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:18:27 by skazama           #+#    #+#             */
/*   Updated: 2025/10/31 14:19:30 by skazama          ###   ########.fr       */
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
