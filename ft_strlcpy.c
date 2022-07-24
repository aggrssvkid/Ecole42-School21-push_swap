/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoye <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:24:14 by enoye             #+#    #+#             */
/*   Updated: 2021/10/13 18:11:47 by enoye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpushswap.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	char	*runingman;
	char	*tmpdst;
	size_t	withoutzero;

	runingman = (char *) src;
	tmpdst = dst;
	withoutzero = dstsize - 1;
	srclen = ft_strlen(src);
	if (srclen == 0)
	{	
		*dst = '\0';
		return (srclen);
	}
	if (dstsize == 0)
		return (srclen);
	while (withoutzero != 0 && *runingman != '\0')
	{
		*tmpdst = *runingman;
		runingman++;
		tmpdst++;
		withoutzero--;
	}
	*tmpdst = '\0';
	return (srclen);
}
