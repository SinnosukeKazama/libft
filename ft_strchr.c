/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skazama <skazama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:37:27 by skazama           #+#    #+#             */
/*   Updated: 2025/10/18 09:49:39 by skazama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr_s;

	i = -1;
	ptr_s = (char *)s;
	while (ptr_s[++i] != '\0')
		if (ptr_s[i] == (char)c)
			return (&ptr_s[i]);
	return (NULL);
}
