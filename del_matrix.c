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

void	del_matrix(char **matrix, char **argv)
{
	char	**arr;

	arr = matrix;
	argv++;
	if (matrix != argv)
	{	
		while (*matrix != 0)
		{
			free(*matrix);
			matrix++;
		}
		free(*matrix);
		free(arr);
	}
}
