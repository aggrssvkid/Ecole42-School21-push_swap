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

static t_need	if_el2_faster(t_list **a, t_list **b, t_need nd)
{
	if (is_top_way_sp(b, nd.gmax) == 1)
	{
		while (nd.gmax != *b)
		{
			rotate_top(b);
			write(1, "rb\n", 3);
		}
	}
	else
	{
		while (nd.gmax != *b)
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

static t_need	if_el1_faster(t_list **a, t_list **b, t_need nd)
{
	if (is_top_way_sp(b, nd.qnext) == 1)
	{
		while (nd.qnext != *b)
		{
			rotate_top(b);
			write(1, "rb\n", 3);
		}
	}
	else
	{
		while (nd.qnext != *b)
		{
			rotate_btm(b);
			write(1, "rrb\n", 4);
		}
	}
	push(b, a);
	write(1, "pa\n", 3);
	if (nd.qnext != nd.qmax)
		nd.qnext = find_next_sp(*b, 0, nd.qnext, nd.sort);
	rotate_top(a);
	write(1, "ra\n", 3);
	return (nd);
}

t_need	jdi_if_el2_big(t_list **a, t_list **b, t_need nd)
{
	if (is_el1_faster_el2(b, nd.qnext, nd.gmax) == 1)
		nd = if_el1_faster(a, b, nd);
	else
		nd = if_el2_faster(a, b, nd);
	return (nd);
}
