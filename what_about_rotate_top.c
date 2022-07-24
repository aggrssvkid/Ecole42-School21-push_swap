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

t_flags	what_about_rotate_top(t_list **a, t_list **b, t_flags var, t_need nd)
{
	var = operation_init(var);
	var.ra = is_rotatetop_a(a, nd.edge);
	var.rb = is_rotatetop_b(b, nd.sort);
	if (var.ra == 1 && var.rb == 1)
	{
		var = operation_init(var);
		var.rr = 1;
	}
	return (var);
}
