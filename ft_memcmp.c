/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skazama <skazama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:21:32 by skazama           #+#    #+#             */
/*   Updated: 2025/10/31 14:21:40 by skazama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr_1 = (const unsigned char *)s1;
	const unsigned char	*ptr_2 = (const unsigned char *)s2;
	size_t				i;

	if (n > 0)
	{
		i = -1;
		while (++i < n)
		{
			if (ptr_1[i] == ptr_2[i])
				continue ;
			else
				return (ptr_1[i] - ptr_2[i]);
		}
	}
	return (0);
}
