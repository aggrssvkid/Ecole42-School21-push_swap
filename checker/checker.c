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

#include "libchecker.h"

int	main(int argc, char	**argv)
{	
	t_list	*a;
	t_list	*b;

	a = 0;
	b = 0;
	if (argc == 1)
		return (0);
	a = full_stack_a(a, argv);
	if (a == 0)
		return (0);
	start_check(&a, &b);
	ft_lstclear(&a);
	ft_lstclear(&b);
	return (0);
}
