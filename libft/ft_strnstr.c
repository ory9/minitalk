/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallan <oallan@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 18:37:43 by oallan            #+#    #+#             */
/*   Updated: 2023/12/30 19:55:24 by oallan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*main_str;
	char	*to_find;
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	main_str = (char *)haystack;
	to_find = (char *)needle;
	if (to_find[0] == '\0')
		return (main_str);
	else if (main_str[0] == '\0' && to_find[0] == '\0')
		return (0);
	while (main_str[i] != '\0')
	{
		while (main_str[i + x] == to_find[x] && len > (i + x))
		{
			if (to_find[x + 1] == '\0')
				return (&main_str[i]);
			x++;
		}
		i++;
	}
	return (0);
}
