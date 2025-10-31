/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skazama <skazama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:27:22 by skazama           #+#    #+#             */
/*   Updated: 2025/10/31 14:27:46 by skazama          ###   ########.fr       */
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
