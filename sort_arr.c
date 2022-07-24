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

static int	are_you_sorted(int *arr, int l)
{
	int	*current;
	int	*next;

	current = arr;
	next = arr + 1;
	while (l - 1 != 0)
	{
		if (*current > *next)
			return (0);
		current++;
		next++;
		l--;
	}
	return (1);
}

void	sort_arr(int *arr, int l)
{
	int	*current;
	int	*next;
	int	tmp;
	int	x;

	while (are_you_sorted(arr, l) == 0)
	{
		x = l;
		current = arr;
		next = arr + 1;
		while (x - 1 != 0)
		{
			if (*current > *next)
			{
				tmp = *next;
				*next = *current;
				*current = tmp;
			}
			x--;
			current++;
			next++;
		}
	}
}
