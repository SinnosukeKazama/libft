/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skazama <skazama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 14:40:34 by skazama           #+#    #+#             */
/*   Updated: 2025/10/22 12:41:11 by skazama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_isnonexis_setchar(const char s1, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (s1 == set[i])
			return (0);
		++i;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	const size_t	len_s1 = ft_strlen(s1);
	char			*s_trimmed;
	unsigned int	i;
	unsigned int	j;

	s_trimmed = (char *)ft_calloc(len_s1, sizeof(char));
	if (s_trimmed)
	{
		i = 0;
		j = 0;
		while (s1[i] != '\0')
		{
			if (ft_isnonexis_setchar(s1[i], set))
				s_trimmed[j++] = s1[i];
			++i;
		}
		return (s_trimmed);
	}
	return (NULL);
}
