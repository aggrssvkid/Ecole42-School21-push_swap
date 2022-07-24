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

#include "libchecker.h"

int	is_str_digits(char *str)
{
	char	*runman;

	runman = str;
	if (*runman == '0' && *(runman + 1) == '\0')
		return (1);
	if (*runman == '0' || *runman == '\0')
		return (0);
	if (*runman == '-' && *(runman +1) != '\0' && *(runman + 1) != '0')
		runman++;
	while (*runman != '\0')
	{
		if (*runman < '0' || *runman > '9')
			return (0);
		runman++;
	}
	return (1);
}
