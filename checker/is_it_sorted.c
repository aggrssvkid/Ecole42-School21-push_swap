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

#include "libchecker.h"

int	is_it_sorted(t_list **list)
{
	int		answer;
	t_list	*current;
	t_list	*nextlist;

	answer = 1;
	current = *list;
	nextlist = (*list)-> next;
	if ((*list)-> next == 0)
		return (answer);
	while (nextlist != 0 && (current -> content) < (nextlist -> content))
	{	
		current = current -> next;
		nextlist = nextlist -> next;
	}
	if (nextlist != 0)
		answer = 0;
	return (answer);
}
