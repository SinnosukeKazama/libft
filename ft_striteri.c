/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skazama <skazama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:28:29 by skazama           #+#    #+#             */
/*   Updated: 2025/10/31 14:28:34 by skazama          ###   ########.fr       */
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
		f(i , s);
		++i;
	}
}
/*

//test striteri
void	f(unsigned int i, char *p)
{
	p[i] = ft_toupper(p[i]);
}
int	main(void)
{
	char s[] = "Applies the function ’f’ to each character of the string passed as argument, passing its index as the first argument. Each character is passed by address to ’f’ so it can be modified if necessary.";
	ft_striteri(s, f);
	ft_putstr_fd(s,1);
	return (0);
}
*/
