/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallan <oallan@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:18:48 by oallan            #+#    #+#             */
/*   Updated: 2023/12/30 17:58:49 by oallan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*pointer;
	t_list	*record;

	pointer = NULL;
	while (lst)
	{
		record = ft_lstnew(f(lst->content));
		if (!(record))
		{
			ft_lstclear(&pointer, del);
			return (0);
		}
		ft_lstadd_back(&pointer, record);
		lst = lst->next;
	}
	return (pointer);
}
