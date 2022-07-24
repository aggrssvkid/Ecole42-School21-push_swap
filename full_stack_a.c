/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoye <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:59:11 by enoye             #+#    #+#             */
/*   Updated: 2021/10/18 21:10:02 by enoye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpushswap.h"

static t_list	*full(t_list *a, char **nmbrs, char **argv)
{
	t_list	*new;

	while (*nmbrs != 0)
	{
		new = ft_lstnew(ft_atoi(*nmbrs));
		if (new == 0)
		{
			del_matrix(nmbrs, argv);
			ft_lstclear(&a);
			return (0);
		}
		ft_lstadd_back(&a, new);
		nmbrs++;
	}
	return (a);
}

t_list	*full_stack_a(t_list *a, char **argv)
{
	char	**nmbrs;

	nmbrs = are_you_correct(argv);
	if (nmbrs == 0 || check_na_int(nmbrs, argv) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	a = full(a, nmbrs, argv);
	if (a == 0)
		return (0);
	if (check_no_iteration(&a) == 0)
	{
		del_matrix(nmbrs, argv);
		ft_lstclear(&a);
		write(1, "Error\n", 6);
		return (0);
	}
	del_matrix(nmbrs, argv);
	return (a);
}
