/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_interger.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallan <oallan@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 21:42:57 by oallan            #+#    #+#             */
/*   Updated: 2024/01/05 16:53:05 by oallan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_printf_interger(long num, int base, int islower)
{
	char	*base_char;
	int		result;

	result = 0;
	if (islower == 0)
		base_char = "0123456789abcdef";
	else
		base_char = "0123456789ABCDEF";
	if (num < 0)
	{
		ft_printf_char('-');
		return (ft_printf_interger(-num, base, islower) + 1);
	}
	if (base > num)
	{
		return (ft_printf_char(base_char[num]));
	}
	else
	{
		result += (ft_printf_interger(num / base, base, islower));
		result += (ft_printf_interger(num % base, base, islower));
	}
	return (result);
}
