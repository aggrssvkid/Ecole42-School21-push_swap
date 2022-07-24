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

static t_need	ogt_push_top(t_list **a, t_list **b, t_need nd)
{
	while (nd.qmax != *b)
	{
		rotate_btm(b);
		write(1, "rrb\n", 4);
	}
	push(b, a);
	write(1, "pa\n", 3);
	if (nd.qmax == nd.gmax && nd.gmax != nd.qnext)
		nd.gmax = find_prvs_sp(nd.qnext, 0, nd.qmax, nd.sort);
	if (nd.qmax != nd.qnext)
		nd.qmax = find_prvs_sp(nd.qnext, 0, nd.qmax, nd.sort);
	return (nd);
}

static t_need	ogt_push_btm(t_list **a, t_list **b, t_need nd)
{
	if (is_top_way_sp(b, nd.gmax) == 1)
	{
		while (*b != nd.gmax)
		{
			rotate_top(b);
			write(1, "rb\n", 3);
		}
	}
	else
	{
		while (*b != nd.gmax)
		{
			rotate_btm(b);
			write(1, "rrb\n", 4);
		}
	}
	push(b, a);
	write(1, "pa\n", 3);
	if (nd.gmax -> next == nd.lowmax)
		nd.lowmax = nd.gmax;
	nd.gmax = find_max_sp(b);
	return (nd);
}

static t_need	ogt_choose_way_btm(t_list **a, t_list **b, t_need nd)
{
	if (is_el1_faster_el2(b, nd.gmax, nd.qmax) == 1 && nd.gmax != nd.qmax)
		nd = ogt_push_btm(a, b, nd);
	else
		nd = ogt_push_top(a, b, nd);
	while (*a != nd.lowmax)
	{
		if (*a == nd.qnext)
		{
			rotate_top(a);
			write(1, "ra\n", 3);
			nd.qnext = find_next_sp(*a, nd.lowmax, nd.qnext, nd.sort);
		}
		else
		{
			push(a, b);
			write(1, "pb\n", 3);
		}
	}
	return (nd);
}

void	ogt_drobim(t_list **a, t_list **b, t_need nd)
{
	t_list	*finder;

	if (is_top_way_sp(b, nd.qnext) == 0)
	{
		finder = nd.qnext;
		while (finder != 0)
		{
			nd.qmax = finder;
			finder = find_next_sp(finder, 0, finder, nd.sort);
		}
		while (are_you_here(b, nd.qnext) == 1)
			nd = ogt_choose_way_btm(a, b, nd);
	}
	else
	{
		finder = nd.qnext;
		while (finder != 0)
		{
			nd.qmax = finder;
			finder = find_next_sp(*b, nd.qmax -> next, nd.qmax, nd.sort);
		}
		while (are_you_here(b, nd.qnext) == 1)
			nd = ogt_choose_way_top(a, b, nd);
	}
}
