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

t_flags	operation_init(t_flags var)
{
	var.sa = 0;
	var.sb = 0;
	var.ss = 0;
	var.pa = 0;
	var.pb = 0;
	var.ra = 0;
	var.rb = 0;
	var.rr = 0;
	var.rra = 0;
	var.rrb = 0;
	var.rrr = 0;
	return (var);
}
