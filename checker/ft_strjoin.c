/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoye <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:35:13 by enoye             #+#    #+#             */
/*   Updated: 2021/11/08 22:32:03 by enoye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libchecker.h"

static char	*copys1(char *runman, char *runjoin)
{
	while (*runman != '\0')
	{
		*runjoin = *runman;
		runjoin++;
		runman++;
	}
	return (runjoin);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*join;
	char	*runman;
	char	*runjoin;

	if (s1 == 0 || s2 == 0)
		return (0);
	runman = (char *) s1;
	join = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * 1);
	if (join == 0)
	{
		free(s1);
		return (0);
	}
	runjoin = join;
	runjoin = copys1(runman, runjoin);
	free(s1);
	runman = (char *) s2;
	while (*runman != '\0')
	{
		*runjoin = *runman;
		runjoin++;
		runman++;
	}
	*runjoin = '\0';
	return (join);
}
