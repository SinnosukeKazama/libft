/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skazama <skazama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:28:29 by skazama           #+#    #+#             */
/*   Updated: 2025/11/01 21:01:58 by skazama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, s);
		++i;
	}
}
/*

test striteri
void	f(unsigned int i, char *p)
{
	p[i] = ft_toupper(p[i]);
}
int	main(void)
{
	char	s[] = "Applies the function";

	ft_striteri(s, f);
	ft_putstr_fd(s,1);
	return (0);
}
*/
