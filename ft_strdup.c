/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skazama <skazama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 09:08:48 by skazama           #+#    #+#             */
/*   Updated: 2025/10/18 09:54:32 by skazama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	const size_t	element_n = ft_strlen(s) + 1;
	char			*dest;

	dest = (char *)ft_calloc(element_n, sizeof(char));
	if (dest)
	{
		ft_strlcpy(dest, s, element_n);
		return (dest);
	}
	return (NULL);
}
