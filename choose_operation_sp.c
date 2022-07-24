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

void	choose_operation_sp(t_list **a, t_list **b, t_need nd)
{
	nd.gmax = find_max_sp(b);
	if (nd.gmax == *b)
	{
		push(b, a);
		write(1, "pa\n", 3);
	}
	else if (ft_lstsize(*a) >= ft_lstsize(*b))
		just_do_it(a, b, nd);
	else if (nd.e >= ft_lstlast(*a)-> content)
		just_do_it(a, b, nd);
	else if (is_top_way_sp(b, nd.gmax) == 1)
		ok_go_top_sp(a, b, nd);
	else
		ok_go_btm_sp(a, b, nd);
	check_conc_sp(a, b, nd);
}
