/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallan <oallan@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 19:06:12 by oallan            #+#    #+#             */
/*   Updated: 2024/01/05 17:04:07 by oallan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_printf(const char *form, ...)
{
	va_list	ap;
	int		res;

	res = 0;
	va_start(ap, form);
	while (*form)
	{
		if (*form == '%')
			res += ft_printf_specifier(*(++form), ap);
		else
			res += write(1, form, 1);
		++form;
	}
	va_end(ap);
	return (res);
}
