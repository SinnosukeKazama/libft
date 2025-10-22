/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skazama <skazama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:38:43 by skazama           #+#    #+#             */
/*   Updated: 2025/10/18 09:55:35 by skazama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*ptr_s = (unsigned char *)src;
	unsigned char		*ptr_d;
	size_t				i;

	ptr_d = (unsigned char *)dest;
	if (ptr_d > ptr_s)
	{
		i = n;
		while (i > 0)
		{
			ptr_d[i - 1] = ptr_s[i - 1];
			--i;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			ptr_d[i] = ptr_s[i];
			++i;
		}
	}
	return (dest);
}
