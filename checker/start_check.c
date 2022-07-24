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

static int	make_operation(t_list **a, t_list **b, char *line)
{
	if (ft_strncmp(line, "pb\n", 3) == 0 && ft_strlen(line) == 3)
		push(a, b);
	else if (ft_strncmp(line, "pa\n", 3) == 0 && ft_strlen(line) == 3)
		push(b, a);
	else if (ft_strncmp(line, "sa\n", 3) == 0 && ft_strlen(line) == 3)
		swap(a);
	else if (ft_strncmp(line, "sb\n", 3) == 0 && ft_strlen(line) == 3)
		swap(b);
	else if (ft_strncmp(line, "ss\n", 3) == 0 && ft_strlen(line) == 3)
		double_swap(a, b);
	else if (ft_strncmp(line, "ra\n", 3) == 0 && ft_strlen(line) == 3)
		rotate_top(a);
	else if (ft_strncmp(line, "rb\n", 3) == 0 && ft_strlen(line) == 3)
		rotate_top(b);
	else if (ft_strncmp(line, "rr\n", 3) == 0 && ft_strlen(line) == 3)
		double_rotatetop(a, b);
	else if (ft_strncmp(line, "rra\n", 4) == 0 && ft_strlen(line) == 4)
		rotate_btm(a);
	else if (ft_strncmp(line, "rrb\n", 4) == 0 && ft_strlen(line) == 4)
		rotate_btm(b);
	else if (ft_strncmp(line, "rrr\n", 4) == 0 && ft_strlen(line) == 4)
		double_rotatebtm(a, b);
	else
		return (0);
	return (1);
}

static void	check_sort_right(t_list **a, t_list **b)
{
	if (is_it_sorted(a) == 1 && *b == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

void	start_check(t_list **a, t_list **b)
{
	char	*line;

	while (1)
	{
		line = get_next_line(0);
		if (line == 0 || (*line == '\n' && *(line + 1) == '\0'))
		{
			check_sort_right(a, b);
			ft_lstclear(a);
			ft_lstclear(b);
			return ;
		}
		if (make_operation(a, b, line) == 0)
		{
			write(1, "Error\n", 6);
			ft_lstclear(a);
			ft_lstclear(b);
			return ;
		}
	}
}
