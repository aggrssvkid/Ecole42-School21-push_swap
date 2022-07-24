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

int	find_diapazon_sp(t_list	**a, t_list **b, t_list *el, int *sort_arr)
{
	int		n;
	int		place;
	int		*kek;
	int		diapazon;

	kek = sort_arr + ft_lstsize(*a) - 1 + ft_lstsize(*b);
	place = 1;
	while (*kek != el -> content)
	{
		kek--;
		place++;
	}
	n = 2;
	while (place > n)
		n = n * 2;
	diapazon = n - ft_lstsize(*a);
	if (diapazon > ft_lstsize(*b))
		diapazon = ft_lstsize(*b);
	return (diapazon);
}
