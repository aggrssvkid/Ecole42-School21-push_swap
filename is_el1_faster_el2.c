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

int	way_el2(t_list **b, t_list *el2, int wayel2)
{	
	t_list	*finder;

	if (wayel2 == 1)
	{
		finder = *b;
		wayel2 = 0;
		while (finder != el2)
		{
			wayel2++;
			finder = finder -> next;
		}
	}
	else
	{
		finder = el2;
		wayel2 = 0;
		while (finder != 0)
		{
			wayel2++;
			finder = finder -> next;
		}
	}
	return (wayel2);
}

int	way_el1(t_list **b, t_list *el1, int wayel1)
{
	t_list	*finder;

	if (wayel1 == 1)
	{
		finder = *b;
		wayel1 = 0;
		while (finder != el1)
		{
			wayel1++;
			finder = finder -> next;
		}
	}
	else
	{
		finder = el1;
		wayel1 = 0;
		while (finder != 0)
		{
			wayel1++;
			finder = finder -> next;
		}
	}
	return (wayel1);
}

int	is_el1_faster_el2(t_list **b, t_list *el1, t_list *el2)
{
	int		wayel1;
	int		wayel2;

	wayel1 = is_top_way_sp(b, el1);
	wayel1 = way_el1(b, el1, wayel1);
	wayel2 = is_top_way_sp(b, el2);
	wayel2 = way_el2(b, el2, wayel2);
	if (wayel1 <= wayel2)
		return (1);
	return (0);
}
