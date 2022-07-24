/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoye <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:12:43 by enoye             #+#    #+#             */
/*   Updated: 2021/11/22 15:12:55 by enoye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpushswap.h"

void	go_go_go(t_list *a, t_list *b, t_flags var, t_need nd)
{
	if (ft_lstsize(a) == 1)
		return ;
	nd.e = find_edge(&a);
	while (ft_lstsize(a) > 2)
	{
		nd.edge = find_edge(&a);
		while (find_lower(&a, nd.edge) == 1)
		{
			write_first_part(&a, &b, var, nd);
		}
	}
	if (a -> content > a -> next -> content)
	{
		swap(&a);
		write(1, "sa\n", 3);
	}
	nd.super = find_max_sp(&a);
	while (b != 0)
		choose_operation_sp(&a, &b, nd);
	ft_lstclear(&a);
	free(nd.sort);
}
