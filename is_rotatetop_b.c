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

int	is_rotatetop_b(t_list **b, int *sort_arr)
{
	int		*pursuit;
	t_list	*find;
	int		x;

	x = 0;
	if (*b == 0 || (*b)-> next == 0)
		return (0);
	pursuit = find_pursuit((*b)-> content, sort_arr);
	find = (*b);
	find = find_here_pursuit(b, *pursuit);
	if (find != 0)
		x = btm_way(b, find);
	return (x);
}
