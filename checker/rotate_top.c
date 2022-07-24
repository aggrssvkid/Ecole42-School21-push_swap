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

void	rotate_top(t_list **beijin)
{
	t_list	*tmp;
	t_list	*tmplast;

	if (*beijin == 0 || (*beijin)-> next == 0)
		return ;
	tmp = *beijin;
	*beijin = (*beijin)-> next;
	tmplast = ft_lstlast(*beijin);
	tmplast -> next = tmp;
	tmp -> next = 0;
}
