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

t_list	*find_max_sp(t_list **b)
{
	t_list	*max;
	t_list	*checker;

	max = *b;
	checker = *b;
	while (checker != 0)
	{
		if (checker -> content > max -> content)
			max = checker;
		checker = checker -> next;
	}
	return (max);
}
