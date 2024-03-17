/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallan <oallan@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 20:17:00 by oallan            #+#    #+#             */
/*   Updated: 2023/12/30 16:17:52 by oallan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	int		results;

	if (!count || !size)
		return (malloc(0));
	results = count * size;
	if (results / size != count)
		return (0);
	ptr = malloc(results);
	if (!ptr)
		return (0);
	ft_bzero(ptr, results);
	return (ptr);
}
