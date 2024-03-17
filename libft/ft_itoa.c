/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallan <oallan@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 19:17:12 by oallan            #+#    #+#             */
/*   Updated: 2023/12/30 17:26:42 by oallan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count(int nb)
{
	int			i;
	long int	num;

	num = nb;
	i = 0;
	if (num == 0)
		i++;
	if (num < 0)
	{
		i++;
		num *= -1;
	}
	while (num > 0)
	{
		i++;
		num = num / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*results;
	int		num_len;
	long	num;

	num_len = count(n);
	num = n;
	results = malloc(sizeof(char) * (num_len + 1));
	if (!results)
		return (0);
	results[num_len--] = 0;
	if (num == 0)
		results[0] = '0';
	if (num < 0)
	{
		results[0] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		results[num_len--] = (num % 10) + '0';
		num /= 10;
	}
	return (results);
}
