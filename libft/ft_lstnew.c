/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallan <oallan@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:02:41 by oallan            #+#    #+#             */
/*   Updated: 2023/12/30 18:01:24 by oallan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*box;

	box = (t_list *)malloc(sizeof(t_list));
	if (!box)
		return (0);
	box->content = content;
	box->next = NULL;
	return (box);
}
