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

int	*sort_list(t_list **a)
{
	t_list	*tmp;
	int		l;
	int		*sort_lst;
	int		*runman;

	l = ft_lstsize(*a);
	sort_lst = malloc(l * sizeof(int));
	if (sort_lst == 0)
		return (0);
	tmp = *a;
	runman = sort_lst;
	while (tmp != 0)
	{
		*runman = tmp -> content;
		runman++;
		tmp = tmp -> next;
	}
	sort_arr(sort_lst, l);
	return (sort_lst);
}
