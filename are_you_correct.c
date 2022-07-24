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

char	**are_you_correct(char **argv)
{
	char	**kek;
	char	**runman;

	if (argv[2] == 0)
	{
		kek = ft_split(argv[1], ' ');
		if (kek == 0)
			return (0);
	}
	else
		kek = &argv[1];
	runman = kek;
	while (*runman != 0)
	{
		if (is_str_digits(*runman) == 1)
			runman++;
		else
		{
			del_matrix(kek, argv);
			return (0);
		}
	}
	return (kek);
}
