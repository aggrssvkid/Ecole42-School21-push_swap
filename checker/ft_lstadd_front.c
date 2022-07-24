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

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == 0)
		return ;
	if (*lst == 0)
		*lst = new;
	else
	{
		new -> next = *lst;
		*lst = new;
	}
}
