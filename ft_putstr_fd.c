/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skazama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 08:29:44 by skazama           #+#    #+#             */
/*   Updated: 2025/10/26 11:30:08 by skazama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	unsigned int	i;
	ssize_t	byt_written;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		byt_written = write(fd, &s[i++], 1);
		if (byt_written <= 0)
			break;
	}
}
