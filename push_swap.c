/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoye <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:12:43 by enoye             #+#    #+#             */
/*   Updated: 2021/11/22 15:12:55 by enoye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpushswap.h"

int	main(int argc, char	**argv)
{	
	t_list	*a;
	t_list	*b;
	t_need	nd;
	t_flags	var;

	a = 0;
	b = 0;
	nd.edge = 0;
	var.sa = 0;
	if (argc == 1)
		return (0);
	a = full_stack_a(a, argv);
	if (a == 0 || is_it_sorted(&a) == 1)
		return (0);
	nd.sort = sort_list(&a);
	if (nd.sort == 0)
	{
		ft_lstclear(&a);
		return (0);
	}
	go_go_go(a, b, var, nd);
	return (0);
}
