/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skazama <skazama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:31:47 by skazama           #+#    #+#             */
/*   Updated: 2025/10/31 15:31:59 by skazama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>////////debug

char	*skip_set_f(char const *s1, char const *set)
{
	char	*ptr;
	unsigned int	i;

	i = 0;
	while (s1[i])
	{
		while (set[j])
		{
			if (s1[i] == set[j])
				continue;
			++j;
		}	
		++i;
	}
	return (ptr);
}

char	*skip_set_r(char const *s1, char const *set)
{
	char	*ptr;
	unsigned int	i;

	i = 0;
	while (set[i])
	{
		ptr = ft_strrchr(s1, set[i]);
		++i;
	}
	return (ptr);
	
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*st;
	const char	*ptr_f = skip_set_f(s1, set);
	const char	*ptr_r = skip_set_r(s1, set);
	
	st = ft_substr(ptr_f, 0, (size_t)(ptr_r-ptr_f));
printf("###########In strtrim; st:%s\n",st);
	return (NULL);
}
/*
s1 = "  !,,,A!BC,,,,"
set = " ,!"

s_retrun = "A!BC"

*/
