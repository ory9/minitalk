/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallan <oallan@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 21:16:47 by oallan            #+#    #+#             */
/*   Updated: 2023/12/30 20:00:07 by oallan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	rep;
	char	*stg;

	i = 0;
	rep = c;
	stg = (char *)s;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == rep)
			return (&stg[i]);
		i--;
	}
	return (0);
}
