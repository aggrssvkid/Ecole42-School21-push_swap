/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoye <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 13:37:34 by enoye             #+#    #+#             */
/*   Updated: 2021/10/16 21:09:32 by enoye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpushswap.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*runman1;
	unsigned char	*runman2;

	runman1 = (unsigned char *) s1;
	runman2 = (unsigned char *) s2;
	if (n == 0)
		return (0);
	if (*runman1 == '\0' && *runman2 != '\0')
		return (*runman1 - *runman2);
	while (*runman1 == *runman2 && n != 0 && *runman1 != '\0')
	{
		runman1++;
		runman2++;
		n--;
	}
	if ((*runman1 == '\0') && (*runman2 == '\0'))
		return (0);
	if (n == 0)
		return (0);
	return (*runman1 - *runman2);
}
