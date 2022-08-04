/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strim.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoye <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:05:31 by enoye             #+#    #+#             */
/*   Updated: 2021/10/17 10:32:10 by enoye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpushswap.h"

static char	*ft_lenstrdup(const char *s1, size_t len)
{
	char	*duplicate;

	duplicate = malloc((len + 1) * sizeof(char));
	if (duplicate == 0)
		return (0);
	ft_strlcpy(duplicate, s1, len + 1);
	return (duplicate);
}

static char	*startuem(char *start, size_t x, const char *set)
{
	char	*tmpset;

	while (*start != '\0' && x != 1)
	{
		tmpset = (char *) set;
		while (*start != *tmpset && *tmpset != '\0')
			tmpset++;
		if (*tmpset == '\0')
			x = 1;
		else
			start++;
	}
	return (start);
}

static char	*konec(const char *s1, char *end, size_t x, const char *set)
{
	char	*tmpset;

	while (end != (char *) s1 && x != 1)
	{
		tmpset = (char *) set;
		while (*end != *tmpset && *tmpset != '\0')
			tmpset++;
		if (*tmpset == '\0')
			x = 1;
		else
			end--;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	size_t	x;
	char	*trim;

	if (s1 == 0)
		return (0);
	x = 0;
	start = (char *) s1;
	start = startuem(start, x, set);
	if (*start == '\0')
	{
		trim = malloc (1 * sizeof(char));
		*trim = '\0';
		return (trim);
	}
	end = ((char *) s1) + ft_strlen(s1) - 1;
	end = konec(s1, end, x, set);
	x = end - start + 1;
	trim = ft_lenstrdup(start, x);
	return (trim);
}
