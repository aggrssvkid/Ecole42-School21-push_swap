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

int	check_no_iteration(t_list **a)
{
	t_list	*finder;
	t_list	*element;

	element = *a;
	while (element != 0)
	{
		finder = element -> next;
		while (finder != 0)
		{
			if (finder -> content == element -> content)
				return (0);
			finder = finder -> next;
		}
		element = element -> next;
	}
	return (1);
}
