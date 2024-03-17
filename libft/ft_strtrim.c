/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallan <oallan@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 20:46:22 by oallan            #+#    #+#             */
/*   Updated: 2023/12/30 20:03:45 by oallan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	int	is_met(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	x;
	size_t	i;
	char	*large_str;
	char	*str;
	char	*results;

	large_str = (char *)s1;
	str = (char *)set;
	x = ft_strlen(large_str);
	i = 0;
	while (large_str && is_met(large_str[i], str))
		i++;
	while (large_str && is_met(large_str[x - 1], str))
		x--;
	results = ft_substr(large_str, i, (x - i));
	return (results);
}
