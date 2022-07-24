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

int	check_na_int(char **arr, char **argv)
{	
	int		nbr;
	char	**free;

	free = arr;
	while (*arr != 0)
	{
		if ((**arr == '-' && *(*arr + 1) == '1' && *(*arr + 2) == '\0'))
			arr++;
		else if (**arr == '0')
			arr++;
		else
		{
			nbr = ft_atoi(*arr);
			if (nbr == 0 || nbr == -1)
			{
				del_matrix(free, argv);
				return (0);
			}
			arr++;
		}
	}
	return (1);
}
