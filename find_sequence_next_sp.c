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

static t_need	help_again(t_list **b, t_need nd, t_list *limit, int i)
{
	nd.toend = *b;
	while (nd.toend != limit)
	{
		nd.nxt = nd.toend;
		nd.finder = nd.nxt;
		i = 0;
		while (nd.finder != 0)
		{
			nd.nxt = nd.finder;
			nd.finder = find_next_sp(nd.nxt, limit, nd.nxt, nd.sort);
			i++;
		}
		if (i > nd.nofseq)
		{
			nd.qmax = nd.toend;
			nd.qnext = nd.nxt;
			nd.nofseq = i;
		}
		nd.toend = nd.toend -> next;
	}
	return (nd);
}

t_need	find_sequence_next_sp(t_list **b, t_need nd)
{
	t_list	*limit;
	int		i;

	limit = *b;
	i = nd.diapazon;
	while (i != 0 && limit != 0)
	{
		limit = limit -> next;
		i--;
	}
	nd = help_again(b, nd, limit, i);
	if (limit == *b)
	{
		nd.qmax = *b;
		nd.qnext = *b;
	}
	return (nd);
}
