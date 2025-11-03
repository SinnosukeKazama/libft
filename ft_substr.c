/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skazama <skazama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:32:03 by skazama           #+#    #+#             */
/*   Updated: 2025/11/04 03:40:18 by skazama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*subs;
	unsigned int	i;
	unsigned int	size_allocate;

	i = 0;
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (start > ft_strlen(s) - 1)
		start = ft_strlen(s);
	while (s[start + i] != '\0' && i < len)
		++i;
	size_allocate = i + 1;
	subs = (char *)ft_calloc(size_allocate, sizeof(char));
	if (subs)
	{
		ft_strlcpy(subs, &s[start], size_allocate);
		return (subs);
	}
	return (NULL);
}
/*
value i = s's null or index of len

*/
