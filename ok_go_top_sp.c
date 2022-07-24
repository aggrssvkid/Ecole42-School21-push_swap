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

static t_need	b_raven_seqmax(t_list **a, t_list **b, t_need nd)
{
	if (nd.qmax != nd.qnext)
		nd.qmax = find_next_sp(nd.qmax, nd.qnext -> next, nd.qmax, nd.sort);
	push(b, a);
	write(1, "pa\n", 3);
	if (*b != nd.qmax && *b != nd.gmax && is_top_way_sp(b, nd.gmax) == 1)
	{
		double_rotatetop(a, b);
		write(1, "rr\n", 3);
	}
	else
	{
		rotate_top(a);
		write(1, "ra\n", 3);
	}
	return (nd);
}

static t_need	if_seqmax_low(t_list **a, t_list **b, t_need nd)
{
	while (*b != nd.gmax && *b != nd.qmax)
	{
		rotate_top(b);
		write(1, "rb\n", 3);
	}
	if (*b == nd.gmax)
	{
		push(b, a);
		write(1, "pa\n", 3);
		if (nd.gmax -> next == nd.lowmax)
			nd.lowmax = nd.gmax;
		nd.gmax = find_max_sp(b);
	}
	else if (*b == nd.qmax)
		nd = b_raven_seqmax(a, b, nd);
	return (nd);
}

static t_need	ogt_limits(t_list **a, t_list **b, t_need nd)
{
	t_list	*finder;
	int		range;

	range = 0;
	finder = *b;
	while (finder != nd.gmax -> next)
	{
		range++;
		finder = finder -> next;
	}
	nd.diapazon = find_diapazon_sp(a, b, nd.gmax, nd.sort);
	if (nd.diapazon < range)
		nd.diapazon = range;
	if (nd.super == ft_lstlast(*a))
	{
		nd.nofseq = 0;
		nd = find_sequence_next_sp(b, nd);
		nd = find_sequence_prvs_sp(b, nd);
	}
	else if (ft_lstlast(*a) != nd.super)
	{
		nd.qmax = ft_lstlast(*a);
		nd.qnext = find_next_sp(*b, 0, nd.qmax, nd.sort);
	}
	return (nd);
}

void	ok_go_top_sp(t_list **a, t_list **b, t_need nd)
{
	nd = ogt_limits(a, b, nd);
	nd.lowmax = *a;
	if (nd.qmax -> content <= nd.qnext -> content && nd.qmax != ft_lstlast(*a))
	{
		while (are_you_here(b, nd.qnext) == 1)
			nd = if_seqmax_low(a, b, nd);
	}
	else
		ogt_drobim(a, b, nd);
}
