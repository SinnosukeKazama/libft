/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skazama <skazama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:26:53 by skazama           #+#    #+#             */
/*   Updated: 2025/10/31 14:27:02 by skazama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlento(const char c, const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		++i;
	return (i);
}

static void	free_all(char **s, size_t index)
{
	size_t	i;

	i = 0;
	while (i < index)
	{
		free(s[i]);
		++i;
	}
	free(s);
}

static size_t	ft_count_row(const char c, const char *s)
{
	size_t	i;
	size_t	row;

	i = 0;
	row = 1;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
		{
			++row;
		}
		++i;
	}
	return (row);
}

static char	**ft_makesubstr(char **s_spl, char *ptr_s, char c, size_t row)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	s_spl[j] = ft_substr(ptr_s, i, ft_strlento(c, ptr_s));
	while (ptr_s[i] != '\0' && j < row)
	{
		if (ptr_s[i] == c)
		{
			while (ptr_s[i] == c && ptr_s[i] != '\0')
				++i;
			s_spl[++j] = ft_substr(&ptr_s[i], 0, ft_strlento(c, &ptr_s[i]));
			if (!s_spl[j])
			{
				free_all(s_spl, j);
				return (NULL);
			}
		}
		++i;
	}
	return (s_spl);
}

char	**ft_split(const char *s, char c)
{
	char	**s_spl;
	size_t	row;
	char	*ptr_s;

	ptr_s = (char *)s;
	while (*ptr_s == c)
		++ptr_s;
	row = ft_count_row(c, ptr_s);
	s_spl = (char **)ft_calloc(row + 1, sizeof(char *));
	if (!s_spl)
		return (NULL);
	s_spl = ft_makesubstr(s_spl, ptr_s, c, row);
	if (!s_spl)
		return (NULL);
	s_spl[row] = NULL;
	return (s_spl);
}
/*
WORK FLOW:
1)count number of row.		->in ft_split.
2)allocate memory as (char **).	->in ft_split.
3)make and cpy the line.	->in ft_makesubstr.
-----------------------------------------------------------
TREE OF THE CALLING FUNCTONS:
ft_split();
	ft_skip_first();
	ft_count_row();
	ft_calloc();
	ft_makesubstr();
		ft_strlento();
		ft_substr();
*/
