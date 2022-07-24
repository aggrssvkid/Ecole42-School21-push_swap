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

int	btm_way(t_list **b, t_list *find)
{
	int		way_top;
	int		way_btm;
	t_list	*runman;

	way_top = 0;
	way_btm = 1;
	runman = (*b)-> next;
	while (runman != find)
	{
		if (runman -> content < (*b)-> content)
			way_top++;
		runman = runman -> next;
	}
	while (find != 0)
	{
		if (find -> content < (*b)-> content)
			way_btm++;
		find = find -> next;
	}
	if (way_btm < way_top)
		return (1);
	return (0);
}
