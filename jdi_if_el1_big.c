/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoye <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:12:37 by enoye             #+#    #+#             */
/*   Updated: 2021/10/17 10:10:35 by enoye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpushswap.h"

static t_need	el2_faster(t_list **a, t_list **b, t_need nd)
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

static t_need	el1_faster(t_list **a, t_list **b, t_need nd)
{
	if (is_top_way_sp(b, nd.qmax) == 1)
	{
		while (nd.qmax != *b)
		{
			rotate_top(b);
			write(1, "rb\n", 3);
		}
	}
	else
	{
		while (nd.qmax != *b)
		{
			rotate_btm(b);
			write(1, "rrb\n", 4);
		}
	}
	push(b, a);
	write(1, "pa\n", 3);
	if (nd.gmax == nd.qmax && nd.gmax != nd.qnext)
		nd.gmax = find_prvs_sp(*b, 0, nd.qmax, nd.sort);
	if (nd.qmax != nd.qnext)
		nd.qmax = find_prvs_sp(*b, 0, nd.qmax, nd.sort);
	return (nd);
}

t_need	jdi_if_el1_big(t_list **a, t_list **b, t_need nd)
{
	if (is_el1_faster_el2(b, nd.qmax, nd.gmax) == 1)
		nd = el1_faster(a, b, nd);
	else
		nd = el2_faster(a, b, nd);
	return (nd);
}
