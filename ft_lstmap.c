/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zengxin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 10:50:51 by zengxin           #+#    #+#             */
/*   Updated: 2017/09/27 10:50:53 by zengxin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*head;
	t_list	*list;

	if (lst == 0 || f == 0)
		return (NULL);
	list = lst;
	head = f(list);
	tmp = head;
	list = list->next;
	while (list)
	{
		tmp->next = f(list);
		tmp = tmp->next;
		list = list->next;
	}
	return (head);
}
