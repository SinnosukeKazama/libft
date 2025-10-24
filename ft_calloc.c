/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skazama <skazama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 08:06:50 by skazama           #+#    #+#             */
/*   Updated: 2025/10/24 10:36:36 by skazama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	int				allocate_size;

	allocate_size = size * nmemb;
	if (allocate_size == 0)
		allocate_size = 1;
	ptr = (unsigned char *)malloc(allocate_size);
	if (!ptr)
		return (NULL);
	ptr = (unsigned char *)ft_memset(ptr, 0, allocate_size);
	return ((void *)ptr);
}
