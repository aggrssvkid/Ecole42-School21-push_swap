/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoye <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:41:44 by enoye             #+#    #+#             */
/*   Updated: 2021/10/18 19:54:24 by enoye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libchecker.h"

void	rotate_btm(t_list **beijin)
{
	t_list	*newlast;
	t_list	*tmp;

	if (*beijin == 0 || (*beijin)-> next == 0)
		return ;
	newlast = *beijin;
	tmp = ft_lstlast(newlast);
	while (newlast -> next -> next != 0)
		newlast = newlast -> next;
	newlast -> next = 0;
	tmp -> next = *beijin;
	*beijin = tmp;
}
