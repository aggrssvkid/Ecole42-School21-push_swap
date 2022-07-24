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

int	maybe_double_s(t_list **a, t_list **b, t_need nd)
{
	int		answer;
	int		*pursuit;
	t_list	*this;

	answer = 0;
	if (is_rotatetop_a(&((*a)-> next), nd.edge) == 0)
	{
		if ((*a)-> content > (*a)-> next -> content)
		{
			pursuit = find_pursuit((*a)-> content, nd.sort);
			this = find_here_pursuit(b, *pursuit);
			if (this == 0)
				answer = 1;
		}
		else
		{
			pursuit = find_pursuit((*a)-> next -> content, nd.sort);
			this = find_here_pursuit(b, *pursuit);
			if (this != 0)
				answer = 1;
		}
	}
	return (answer);
}
