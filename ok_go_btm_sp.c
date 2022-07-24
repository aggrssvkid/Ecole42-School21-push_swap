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

static void	ogb_end_step(t_list **a, t_list **b, t_need nd)
{
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
}

static	t_need	ogb_el1_faster(t_list **a, t_list **b, t_need nd)
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

static	t_need	ogb_push_btm(t_list **a, t_list **b, t_need nd)
{
	if (is_el1_faster_el2(b, nd.gmax, nd.qmax) == 1 && nd.gmax != nd.qmax)
		nd = ogb_el1_faster(a, b, nd);
	else
	{
		while (nd.qmax != *b)
		{
			rotate_btm(b);
			write(1, "rrb\n", 4);
		}
		push(b, a);
		write(1, "pa\n", 3);
		if (nd.gmax == nd.qmax && nd.gmax != nd.qnext)
			nd.gmax = find_prvs_sp(nd.qnext, 0, nd.qmax, nd.sort);
		if (nd.qmax != nd.qnext)
			nd.qmax = find_prvs_sp(nd.qnext, 0, nd.qmax, nd.sort);
	}
	return (nd);
}

static t_need	ogb_limits(t_list **a, t_list **b, t_need nd)
{
	t_list	*finder;

	nd.qnext = find_next_sp(*b, 0, ft_lstlast(*a), nd.sort);
	if (is_top_way_sp(b, nd.qnext) == 0)
	{
		finder = nd.qnext;
		while (finder != 0)
		{
			nd.qmax = finder;
			finder = find_next_sp(nd.qmax, 0, nd.qmax, nd.sort);
		}
	}	
	else
	{
		finder = nd.qnext;
		while (finder != 0)
		{
			nd.qmax = finder;
			finder = find_next_sp(*b, nd.qmax -> next, nd.qmax, nd.sort);
		}
	}
	return (nd);
}

void	ok_go_btm_sp(t_list **a, t_list **b, t_need nd)
{
	nd.diapazon = find_diapazon_sp(a, b, nd.gmax, nd.sort);
	if (nd.super == ft_lstlast(*a))
	{
		nd.nofseq = 0;
		nd = find_sequence_prvs_sp(b, nd);
	}
	else if (ft_lstlast(*a) != nd.super)
		nd = ogb_limits(a, b, nd);
	nd.lowmax = *a;
	if (is_top_way_sp(b, nd.qnext) == 0)
	{
		while (are_you_here(b, nd.qnext) == 1)
			nd = ogb_push_btm(a, b, nd);
	}
	else
	{
		while (are_you_here(b, nd.qnext) == 1)
			nd = ogb_push_top(a, b, nd);
	}
	ogb_end_step(a, b, nd);
}
