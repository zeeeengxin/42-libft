/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zengxin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 23:56:37 by zengxin           #+#    #+#             */
/*   Updated: 2017/09/26 23:56:39 by zengxin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*list;
	t_list	*tmp;

	if (lst == 0)
		return ;
	list = lst;
	while (list)
	{
		tmp = list->next;
		f(list);
		list = tmp;
	}
}
