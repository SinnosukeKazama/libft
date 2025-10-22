/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skazama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:59:46 by skazama           #+#    #+#             */
/*   Updated: 2025/10/17 12:49:01 by skazama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr_s;
	unsigned int	i;

	ptr_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr_s[i] = c;
		++i;
	}
	return (s);
}
