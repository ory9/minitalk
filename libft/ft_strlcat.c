/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallan <oallan@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 17:52:34 by oallan            #+#    #+#             */
/*   Updated: 2023/12/30 19:44:29 by oallan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(dst);
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i + len < dstsize - 1)
	{
		dst[i + len] = src[i];
		i++;
	}
	dst[i + len] = '\0';
	if (len >= dstsize)
		return (ft_strlen(src) + dstsize);
	else
		return (ft_strlen(src) + len);
}
