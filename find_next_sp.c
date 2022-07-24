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

t_list	*find_next_sp(t_list *start, t_list *end, t_list *el, int *sort_arr)
{
	int		*nxt;
	t_list	*finder;

	nxt = sort_arr;
	while (*nxt != el -> content)
		nxt++;
	nxt++;
	finder = start;
	while (finder != end)
	{
		if (finder -> content == *nxt)
			return (finder);
		finder = finder -> next;
	}
	return (0);
}
