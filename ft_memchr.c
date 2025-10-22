/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skazama <skazama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 12:50:20 by skazama           #+#    #+#             */
/*   Updated: 2025/10/18 09:51:41 by skazama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr_s = (const unsigned char *)s;
	size_t				i;

	i = 0;
	while (i < n)
	{
		if (ptr_s[i] == c)
			return ((void *)ptr_s + i);
		++i;
	}
	return (NULL);
}
