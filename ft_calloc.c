/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skazama <skazama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:10:17 by skazama           #+#    #+#             */
/*   Updated: 2025/10/31 14:10:22 by skazama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t		size_allocate;

	size_allocate = size * nmemb;	
	if (size_allocate == 0 || nmemb > SIZE_MAX / size)
		size_allocate = 1;
	ptr = malloc(size_allocate);
	if (!ptr)
		return (NULL);
	ptr = ft_memset(ptr, 0, size_allocate);
	return (ptr);
}
