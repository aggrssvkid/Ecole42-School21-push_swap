/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoye <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:49:50 by enoye             #+#    #+#             */
/*   Updated: 2021/10/13 16:40:08 by enoye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpushswap.h"

char	*ft_strdup(const char *s1)
{
	char	*duplicate;
	size_t	len;

	len = ft_strlen(s1);
	duplicate = malloc((len + 1) * sizeof(char));
	if (duplicate == 0)
		return (0);
	len = ft_strlcpy(duplicate, s1, len + 1);
	return (duplicate);
}
