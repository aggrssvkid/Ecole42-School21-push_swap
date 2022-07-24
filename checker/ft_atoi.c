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

static long	summiruem(long sum, const char *str, int znak)
{
	int	check;

	while (*str >= '0' && *str <= '9')
	{
		check = sum;
		sum = sum * 10 + ((*str) - '0');
		str++;
		if (check > sum || sum > 2147483647)
		{
			if (znak == -1)
				return (0);
			return (-1);
		}
	}
	return (sum);
}

int	ft_atoi(const char *str)
{
	long	sum;
	int		znak;
	char	*lowest;

	lowest = "-2147483648";
	znak = ft_strlen(lowest);
	if (ft_strncmp(str, lowest, znak) == 0 && znak == (int) ft_strlen(str))
		return (-2147483648);
	znak = 1;
	sum = 0;
	while ((*str >= 9 && *str <= 13) || (*str == ' '))
		str++;
	if (*str == '-')
		znak = -1;
	if ((*str == '-') || (*str == '+'))
		str++;
	sum = summiruem(sum, str, znak);
	if (znak == -1)
		return ((int) sum * znak);
	return ((int) sum);
}
