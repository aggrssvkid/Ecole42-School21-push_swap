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

t_flags	make_operation_fp(t_list **a, t_list **b, t_flags var, t_need nd)
{
	var = what_about_rotate_top(a, b, var, nd);
	if (var.ra == 1)
		rotate_top(a);
	else if (var.rb == 1)
		rotate_top(b);
	else if (var.rr == 1)
		double_rotatetop(a, b);
	else if (var.ra == 0 && var.rb == 0 && var.rr == 0)
	{
		var = what_about_swap(a, b, var, nd);
		if (var.sb == 1)
			swap(b);
		else if (var.ss == 1)
			double_swap(a, b);
		else if (var.sb == 0 && var.ss == 0)
		{
			var.pb = 1;
			push(a, b);
		}
	}
	return (var);
}
