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

int	is_top_way_sp(t_list **b, t_list *element)
{
	t_list	*finder;
	int		place;

	place = 1;
	finder = *b;
	while (finder != element)
	{
		place++;
		finder = finder -> next;
	}
	if (place <= (ft_lstsize(*b) + 1) / 2)
		place = 1;
	else
		place = 0;
	return (place);
}
