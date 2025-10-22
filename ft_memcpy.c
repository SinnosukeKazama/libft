/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skazama <skazama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:19:00 by skazama           #+#    #+#             */
/*   Updated: 2025/10/18 09:55:16 by skazama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr_d;
	const unsigned char	*ptr_s = (const unsigned char *)src;
	unsigned int		i;

	ptr_d = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		ptr_d[i] = ptr_s[i];
		++i;
	}
	return (dest);
}
