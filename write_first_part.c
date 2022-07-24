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

void	write_first_part(t_list **a, t_list **b, t_flags var, t_need nd)
{
	var = make_operation_fp(a, b, var, nd);
	if (var.ra == 1)
		write(1, "ra\n", 3);
	else if (var.rb == 1)
		write(1, "rb\n", 3);
	else if (var.rr == 1)
		write(1, "rr\n", 3);
	else if (var.sb == 1)
		write(1, "sb\n", 3);
	else if (var.ss == 1)
		write(1, "ss\n", 3);
	else if (var.pb == 1)
		write(1, "pb\n", 3);
}
