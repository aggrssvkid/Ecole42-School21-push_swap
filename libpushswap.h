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

#ifndef LIBPUSHSWAP_H
# define LIBPUSHSWAP_H

# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}	t_list;

typedef struct s_flags
{
	int	sa;
	int	sb;
	int	ss;
	int	pa;
	int	pb;
	int	ra;
	int	rb;
	int	rr;
	int	rra;
	int	rrb;
	int	rrr;
}	t_flags;

typedef struct s_need
{
	t_list	*finder;
	t_list	*toend;
	t_list	*prvs;
	t_list	*nxt;
	int		diapazon;
	int		edge;
	int		*sort;
	int		nofseq;
	int		e;
	t_list	*qnext;
	t_list	*qmax;
	t_list	*gmax;
	t_list	*super;
	t_list	*gmaxnxt;
	t_list	*lowmax;
}	t_need;

void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content);
int		ft_lstsize(t_list *lst);
int		ft_atoi(const char *str);
void	swap(t_list **beijin);
void	rotate_top(t_list **beijin);
void	rotate_btm(t_list **beijin);
void	push(t_list **list1, t_list **list2);
int		is_it_sorted(t_list **list);
void	print(t_list **lst1, t_list **lst2);
t_flags	operation_init(t_flags var);
int		is_rotatetop_a(t_list **a, int edge);
int		is_swap_a(t_list **a);
int		is_swap_b(t_list **b);
void	double_rotatetop(t_list **a, t_list **b);
void	double_swap(t_list**a, t_list **b);
int		find_edge(t_list **a);
int		edge_if_not_even(t_list **a);
int		edge_if_even(t_list **a);
int		find_lower(t_list **a, int edge);
t_list	*full_stack_a(t_list *a, char **argv);
void	write_first_part(t_list **a, t_list **b, t_flags var, t_need nd);
t_flags	make_operation_fp(t_list **a, t_list **b, t_flags var, t_need nd);
int		is_rotatetop_b(t_list **b, int *half_pb);
t_list	*find_here_pursuit(t_list **b, int pursuit);
int		btm_way(t_list **b, t_list *find);
int		*sort_list(t_list **a);
void	sort_arr(int *arr, int l);
int		*find_pursuit(int content, int *half_pb);
t_flags	what_about_rotate_top(t_list **a, t_list **b, t_flags var, t_need nd);
t_flags	what_about_swap(t_list **a, t_list **b, t_flags var, t_need nd);
int		maybe_double_s(t_list **a, t_list **b, t_need nd);
void	ft_lstdelone(t_list *lst);
void	ft_lstclear(t_list **lst);
char	**ft_split(char const *s, char c);
char	*ft_strdup(const char *s1);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *str);
char	*ft_strtrim(char const *s1, char const *set);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

int		check_na_int(char **arr, char **argv);
int		check_no_iteration(t_list **a);
char	**are_you_correct(char **argv);
int		is_str_digits(char *str);
void	del_matrix(char **matrix, char **argv);

void	choose_operation_sp(t_list **a, t_list **b, t_need nd);
void	ok_go_top_sp(t_list **a, t_list **b, t_need nd);
void	ok_go_btm_sp(t_list **a, t_list **b, t_need nd);
t_list	*find_prvs_sp(t_list *start, t_list *end, t_list *el, int *sort_arr);
t_list	*find_next_sp(t_list *start, t_list *end, t_list *el, int *sort_arr);
int		is_top_way_sp(t_list **b, t_list *element);
t_list	*find_max_sp(t_list **b);
int		are_you_here(t_list **b, t_list *element);
int		find_diapazon_sp(t_list	**a, t_list **b, t_list *el, int *sort_arr);
t_need	find_sequence_next_sp(t_list **b, t_need nd);
t_need	find_sequence_prvs_sp(t_list **b, t_need nd);
int		is_between_sp(t_list *start, t_list *end, t_list *element);
void	check_conc_sp(t_list **a, t_list **b, t_need nd);
void	double_rotatebtm(t_list **a, t_list **b);
int		is_el1_faster_el2(t_list **b, t_list *el1, t_list *el2);
void	just_do_it(t_list **a, t_list **b, t_need nd);
void	go_go_go(t_list *a, t_list *b, t_flags var, t_need nd);
t_need	jdi_if_el1_big(t_list **a, t_list **b, t_need nd);
t_need	jdi_if_el2_big(t_list **a, t_list **b, t_need nd);
void	ogt_drobim(t_list **a, t_list **b, t_need nd);
t_need	ogt_choose_way_top(t_list **a, t_list **b, t_need nd);
t_need	ogb_push_top(t_list **a, t_list **b, t_need nd);

#endif