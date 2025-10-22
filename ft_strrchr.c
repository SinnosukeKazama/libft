/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skazama <skazama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:42:33 by skazama           #+#    #+#             */
/*   Updated: 2025/10/18 09:54:58 by skazama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*ptr_s;

	i = ft_strlen(s);
	ptr_s = (char *)s;
	while (i)
	{
		if (ptr_s[i - 1] == c)
			return (&ptr_s[i - 1]);
		--i;
	}
	return (NULL);
}
