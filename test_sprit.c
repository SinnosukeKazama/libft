/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_sprit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skazama <skazama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 21:41:51 by skazama           #+#    #+#             */
/*   Updated: 2025/11/02 23:13:18 by skazama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
/*
static size_t	ft_count_row(const char c, const char *s)
{
	size_t	i;
	size_t	row;
	int isword;

	i = 0;
	row = 0;
	isword = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (isword == 0)
				++row;
			isword = 1;
		}
		else if (s[i] == c)
			isword = 0;
		
		++i;
	}
	return (row);
}*/
int main(void)
{
//	printf("%d", ft_count_row(' ', "    "));
	char **s = ft_split("", 'z');
	char **s1 = ft_split("      ", ' ');
	char **s2 = ft_split("    A  ", ' ');
	printf("s:%p\n", s[0]);//must be null
	printf("s1[0]:%s\n", s1[0]);//must be null
	printf("s2[0]:%s\n", s2[0]);//must be A

	return (0);
}
