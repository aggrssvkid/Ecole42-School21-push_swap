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

void	check_conc_sp(t_list **a, t_list **b, t_need nd)
{
	if (*b != 0)
		nd.gmax = find_max_sp(b);
	if (*a == find_next_sp(*a, (*a)-> next, ft_lstlast(*a), nd.sort))
	{
		if (*b != 0 && is_top_way_sp(b, nd.gmax) == 0)
		{
			while (nd.gmax != *b && nd.super != ft_lstlast(*a))
			{
				double_rotatebtm(a, b);
				write(1, "rrr\n", 4);
			}
		}
		while (nd.super != ft_lstlast(*a))
		{
			rotate_btm(a);
			write(1, "rra\n", 4);
		}
	}
}
