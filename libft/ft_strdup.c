/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallan <oallan@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 20:48:25 by oallan            #+#    #+#             */
/*   Updated: 2023/12/30 19:14:37 by oallan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*cpy;
	const char	*str;
	int			i;

	i = 0;
	str = s1;
	if (str == 0)
		return (0);
	while (str[i] != '\0')
		i++;
	cpy = (char *)malloc(sizeof(char) * (i + 1));
	if (!(cpy))
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
