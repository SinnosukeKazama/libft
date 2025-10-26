/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skazama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 10:00:15 by skazama           #+#    #+#             */
/*   Updated: 2025/10/26 14:03:04 by skazama          ###   ########.fr       */
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
void	f(unsigned int i, char *p)
{
	p[i] = tolower(p[i]);
}
static void	f2_oneplus_alphabet_to(unsigned int index, char *s)
{
	unsigned int	i = index;
	while (s[i] != '\0')
		++(s[i++]);
	printf("%s", s);
}
//test striteri
int	main(void)
{
	char s[] = "Applies the function ’f’ to each character of the string passed as argument, passing its index as the first argument. Each character is passed by address to ’f’ so it can be modified if necessary.";
	ft_striteri(s, f2_oneplus_alphabet_to);
	return (0);
}
*/
