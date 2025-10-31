/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skazama <skazama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:28:44 by skazama           #+#    #+#             */
/*   Updated: 2025/10/31 14:28:49 by skazama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*jointed_s;
	const size_t	len_s1 = ft_strlen(s1);
	const size_t	len_s2 = ft_strlen(s2);
	const size_t	num_allocate = len_s1 + len_s2 + 1;

	jointed_s = (char *)ft_calloc(num_allocate, sizeof(char));
	if (jointed_s)
	{
		ft_strlcpy(jointed_s, s1, len_s1 + 1);
		ft_strlcpy(&jointed_s[len_s1], s2, len_s2 + 1);
		return (jointed_s);
	}
	return (NULL);
}
