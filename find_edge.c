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

int	find_edge(t_list **a)
{
	t_list	*tmp;
	int		size;

	tmp = *a;
	size = ft_lstsize(*a);
	if ((size - 1) % 2 == 0)
		size = edge_if_not_even(&tmp);
	else
		size = edge_if_even(&tmp);
	return (size);
}
