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

#include "libpushswap.h"

void	swap(t_list **beijin)
{
	t_list	*tmp;
	t_list	*start;

	if (*beijin == 0 || (*beijin)-> next == 0)
		return ;
	start = *beijin;
	start = start -> next;
	tmp = start -> next;
	start -> next = *beijin;
	start -> next -> next = tmp;
	*beijin = start;
}
