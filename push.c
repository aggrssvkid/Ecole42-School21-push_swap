/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoye <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 12:20:14 by enoye             #+#    #+#             */
/*   Updated: 2021/11/19 14:42:53 by enoye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpushswap.h"

void	push(t_list **list1, t_list **list2)
{
	t_list	*beijin1;

	if (list1 == 0 || *list1 == 0)
		return ;
	if (*list2 == 0)
	{	
		*list2 = *list1;
		*list1 = (*list1)-> next;
		(*list2)-> next = 0;
		return ;
	}
	beijin1 = *list1;
	*list1 = (*list1)-> next;
	beijin1 -> next = *list2;
	*list2 = beijin1;
}
