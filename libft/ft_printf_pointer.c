/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallan <oallan@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 21:44:34 by oallan            #+#    #+#             */
/*   Updated: 2024/01/05 16:55:19 by oallan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_printf_pointer(unsigned long long pointer, int pointer_prefix)
{
	int		res;
	char	*base_char;

	res = 0;
	base_char = "0123456789abcdef";
	if (pointer_prefix == 0)
	{
		res += write(1, "0x", 2);
		pointer_prefix = 1;
	}
	if (pointer >= 16)
	{
		res += ft_printf_pointer(pointer / 16, pointer_prefix);
		pointer %= 16;
	}
	if (pointer < 16)
		res += write(1, &base_char[pointer], 1);
	return (res);
}
