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

static t_need	seq_init(t_list **a, t_list **b, t_need nd)
{
	nd.qmax = ft_lstlast(*a);
	nd.qnext = find_next_sp(*b, 0, nd.qmax, nd.sort);
	nd.qmax = find_next_sp(*b, 0, nd.qnext, nd.sort);
	return (nd);
}

static t_need	find_limits(t_list **a, t_list **b, t_need nd)
{
	t_list	*finder;

	nd = seq_init(a, b, nd);
	if (nd.qmax == 0)
		nd.qmax = nd.qnext;
	else if (is_between_sp(*b, nd.qnext, nd.qmax) == 1)
	{
		finder = nd.qmax;
		while (finder != 0)
		{
			nd.qmax = finder;
			finder = find_next_sp(*b, finder, nd.qmax, nd.sort);
		}
	}
	else
	{
		finder = nd.qmax;
		while (finder != 0)
		{
			nd.qmax = finder;
			finder = find_next_sp(nd.qmax, 0, nd.qmax, nd.sort);
		}
	}
	return (nd);
}

static void	jdi_push_seq(t_list **a, t_list **b, t_need nd)
{
	nd.lowmax = *a;
	while (are_you_here(b, nd.qnext) == 1)
	{
		if (is_el1_faster_el2(b, nd.qmax, nd.qnext) == 1)
			nd = jdi_if_el1_big(a, b, nd);
		else
			nd = jdi_if_el2_big(a, b, nd);
	}
	while (*a != nd.lowmax)
	{
		if (*a == nd.qmax)
		{
			rotate_top(a);
			write(1, "ra\n", 3);
			nd.qmax = find_next_sp(*a, nd.lowmax, nd.qmax, nd.sort);
		}
		else
		{
			push(a, b);
			write(1, "pb\n", 3);
		}
	}
}

void	just_do_it(t_list **a, t_list **b, t_need nd)
{
	t_list	*finder;

	nd.diapazon = ft_lstsize(*b);
	if (nd.super == ft_lstlast(*a))
	{
		nd.nofseq = 0;
		nd = find_sequence_next_sp(b, nd);
		nd = find_sequence_prvs_sp(b, nd);
		if (nd.qmax -> content < nd.qnext -> content)
		{
			finder = nd.qmax;
			nd.qmax = nd.qnext;
			nd.qnext = finder;
		}
	}
	else if (ft_lstlast(*a) != nd.super)
		nd = find_limits(a, b, nd);
	jdi_push_seq(a, b, nd);
}
