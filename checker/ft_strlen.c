/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoye <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:39:05 by enoye             #+#    #+#             */
/*   Updated: 2021/10/13 16:48:34 by enoye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libchecker.h"

size_t	ft_strlen(const char *str)
{
	char	*runingman;
	size_t	len;

	len = 0;
	runingman = (char *) str;
	while (*runingman != '\0')
	{
		len++;
		runingman++;
	}
	return (len);
}
