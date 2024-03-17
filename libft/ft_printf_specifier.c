/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_specifier.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallan <oallan@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 17:49:23 by oallan            #+#    #+#             */
/*   Updated: 2024/01/05 17:49:26 by oallan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_printf_specifier(char specified, va_list ap)
{
	int	result;

	result = 0;
	if (specified == 'c')
		result += ft_printf_char(va_arg(ap, int));
	else if (specified == 's')
		result += ft_printf_str(va_arg(ap, char *));
	else if (specified == 'p')
		result += ft_printf_pointer((unsigned long long)va_arg(ap, void *), 0);
	else if (specified == 'd' || specified == 'i')
		result += ft_printf_interger(va_arg(ap, int), 10, 0);
	else if (specified == 'u')
		result += ft_printf_interger(va_arg(ap, unsigned int), 10, 0);
	else if (specified == 'x')
		result += ft_printf_interger(va_arg(ap, unsigned int), 16, 0);
	else if (specified == 'X')
		result += ft_printf_interger(va_arg(ap, unsigned int), 16, 1);
	else if (specified == '%')
		result += ft_printf_char('%');
	else
		result += write(1, &specified, 1);
	return (result);
}
