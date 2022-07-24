/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoye <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 13:44:26 by enoye             #+#    #+#             */
/*   Updated: 2021/11/19 14:39:18 by enoye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libchecker.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*tmp;

	if (*lst == 0)
		return ;
	while (*lst != 0)
	{
		tmp = (*lst)-> next;
		ft_lstdelone(*lst);
		*lst = tmp;
	}
}
