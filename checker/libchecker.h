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

#ifndef LIBCHECKER_H
# define LIBCHECKER_H

# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 256
# endif

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}	t_list;

typedef struct var
{
	char	buffer[BUFFER_SIZE + 1];
	char	*runman;
	char	*tmp;
	char	*getline;
	int		n;

}	t_var;

char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(const char *str);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst);
void	ft_lstdelone(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content);
int		ft_lstsize(t_list *lst);
int		ft_atoi(const char *str);
void	print(t_list **lst1, t_list **lst2);
t_list	*full_stack_a(t_list *a, char **argv);
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
int		is_it_sorted(t_list **list);
void	swap(t_list **beijin);
void	rotate_top(t_list **beijin);
void	rotate_btm(t_list **beijin);
void	push(t_list **list1, t_list **list2);
void	double_rotatebtm(t_list **a, t_list **b);
void	double_rotatetop(t_list	**a, t_list **b);
void	double_swap(t_list **a, t_list **b);
void	start_check(t_list **a, t_list **b);

#endif