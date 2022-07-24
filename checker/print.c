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

void	print(t_list **lst1, t_list **lst2)
{
	t_list	*tmp1;
	t_list	*tmp2;

	tmp1 = *lst1;
	tmp2 = *lst2;
	while (tmp1 != 0)
	{
		printf("%i   ", tmp1 -> content);
		tmp1 = tmp1 -> next;
	}
	printf("\n\n\n");
	while (tmp2 != 0)
	{
		printf("%i   ", tmp2 -> content);
		tmp2 = tmp2 -> next;
	}
	printf("\n\n\n");
}
