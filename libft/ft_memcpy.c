/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallan <oallan@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 19:10:22 by oallan            #+#    #+#             */
/*   Updated: 2023/12/30 18:49:58 by oallan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*from;
	unsigned char	*to;

	from = ((unsigned char *)src);
	to = ((unsigned char *)dst);
	i = 0;
	if (!dst && !src)
		return (0);
	while (n > i)
	{
		to[i] = from[i];
		i++;
	}
	return (to);
}
