/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallan <oallan@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 15:57:11 by oallan            #+#    #+#             */
/*   Updated: 2023/12/30 18:52:02 by oallan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*to;
	unsigned char	*from;

	to = ((unsigned char *)dst);
	from = ((unsigned char *)src);
	if (src > dst)
		ft_memcpy(to, from, len);
	else
	{
		while (len > 0)
		{
			to[len -1] = from[len -1];
			len--;
		}
	}
	return (to);
}
