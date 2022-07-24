/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoye <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 10:05:06 by enoye             #+#    #+#             */
/*   Updated: 2021/10/17 13:15:58 by enoye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpushswap.h"

static void	zapolnenie(char *runman, char **stringsarr, char c)
{
	char	*tmp;

	tmp = runman;
	while (*runman != '\0')
	{
		if (*runman == c)
		{	
			*runman = '\0';
			runman++;
			while (*runman == c)
				runman++;
			*stringsarr = ft_strdup(tmp);
			stringsarr++;
			tmp = runman;
		}
		runman++;
	}
	*stringsarr = ft_strdup(tmp);
	*(stringsarr + 1) = 0;
}

static char	**getmemory(char **stringsarr, char *runman, char c)
{
	size_t	nofs;

	nofs = 1;
	while (*runman != '\0')
	{
		if (*runman == c)
			nofs++;
		while (*runman == c)
			runman++;
		runman++;
	}
	stringsarr = malloc (sizeof (char *) * (nofs + 1));
	return (stringsarr);
}	

char	**ft_split(char const *s, char c)
{
	char	**stringsarr;
	char	*runman;
	char	*hzzachem;

	if (s == 0)
		return (0);
	stringsarr = &hzzachem;
	runman = ft_strtrim(s, &c);
	if (runman == 0)
		return (0);
	if (*s == '\0' || *runman == '\0')
	{
		stringsarr = malloc (sizeof (char *) * 1);
		*stringsarr = 0;
		free (runman);
		return (stringsarr);
	}
	stringsarr = getmemory(stringsarr, runman, c);
	if (stringsarr == 0)
		free(runman);
	if (stringsarr == 0)
		return (0);
	zapolnenie(runman, stringsarr, c);
	free(runman);
	return (stringsarr);
}
