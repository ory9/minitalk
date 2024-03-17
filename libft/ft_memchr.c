/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallan <oallan@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 22:12:15 by oallan            #+#    #+#             */
/*   Updated: 2023/12/30 18:07:27 by oallan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*cp;

	i = 0;
	cp = (const unsigned char *)s;
	while (n > i)
	{
		if (cp[i] == (unsigned char)c)
			return ((void *)cp + i);
		i++;
	}
	return (0);
}
