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

t_flags	what_about_swap(t_list **a, t_list **b, t_flags var, t_need nd)
{
	int	pursuit;

	if ((*b) == 0 || (*b)-> next == 0)
		return (var);
	pursuit = *(find_pursuit((*b)-> content, nd.sort));
	if (find_here_pursuit(b, pursuit) != 0)
	{
		if ((*b)-> content > (*b)-> next -> content)
			var.sb = 1;
		if (var.sb == 1)
		{
			pursuit = maybe_double_s(a, b, nd);
			if (pursuit == 1)
			{
				var.sb = 0;
				var.ss = 1;
			}
		}
	}
	return (var);
}
