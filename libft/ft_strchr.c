/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallan <oallan@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:41:47 by oallan            #+#    #+#             */
/*   Updated: 2023/12/30 19:09:27 by oallan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*stg;
	char	ctr;

	i = 0;
	stg = (char *)s;
	ctr = c + '\0';
	while (ft_strlen(stg) >= i)
	{
		if (s[i] == ctr)
			return (&stg[i]);
		i++;
	}
	return (0);
}
