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

int	edge_if_not_even(t_list **a)
{
	int		bigger;
	int		lower;
	t_list	*check;
	t_list	*runman;

	check = *a;
	while (check != 0)
	{	
		runman = *a;
		bigger = 0;
		lower = 0;
		while (runman != 0)
		{
			if (check -> content > runman -> content)
				bigger++;
			else if (check -> content < runman -> content)
				lower++;
			runman = runman -> next;
		}
		if (bigger == lower)
			return (check -> content);
		check = check -> next;
	}
	return (0);
}
