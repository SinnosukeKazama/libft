/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skazama <skazama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:26:29 by skazama           #+#    #+#             */
/*   Updated: 2025/10/31 14:26:35 by skazama          ###   ########.fr       */
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
