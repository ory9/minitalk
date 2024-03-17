/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallan <oallan@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 21:36:38 by oallan            #+#    #+#             */
/*   Updated: 2024/01/05 16:56:59 by oallan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_printf_str(char *str)
{
	int	result;

	result = 0;
	if (str == NULL)
		return (ft_printf_str("(null)"));
	while (*str)
	{
		result += ft_printf_char((int)*str);
		str++;
	}
	return (result);
}
