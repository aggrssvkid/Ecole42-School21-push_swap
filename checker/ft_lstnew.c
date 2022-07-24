/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoye <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:21:13 by enoye             #+#    #+#             */
/*   Updated: 2021/11/19 14:43:18 by enoye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libchecker.h"

t_list	*ft_lstnew(int content)
{
	t_list	*begin;

	begin = (t_list *) malloc (sizeof (t_list));
	if (begin == 0)
		return (0);
	begin -> content = content;
	begin -> next = 0;
	return (begin);
}
