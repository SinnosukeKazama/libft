/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skazama <skazama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:22:09 by skazama           #+#    #+#             */
/*   Updated: 2025/10/31 14:23:07 by skazama          ###   ########.fr       */
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
