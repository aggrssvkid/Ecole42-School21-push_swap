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

t_list	*find_prvs_sp(t_list *start, t_list *end, t_list *el, int *sort_arr)
{
	int		*previous;
	t_list	*finder;

	previous = sort_arr;
	while (*previous != el -> content)
		previous++;
	if (previous == sort_arr)
		return (0);
	previous--;
	finder = start;
	while (finder != end)
	{
		if (finder -> content == *previous)
			return (finder);
		finder = finder -> next;
	}
	return (0);
}
