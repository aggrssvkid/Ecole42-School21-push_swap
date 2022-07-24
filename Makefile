SRCS = ft_lstadd_front.c ft_lstadd_back.c ft_lstlast.c ft_lstnew.c ft_lstsize.c\
		print.c ft_atoi.c swap.c rotate_top.c is_it_sorted.c rotate_btm.c push.c\
		is_rotatetop_a.c operation_init.c double_rotatetop.c double_swap.c find_edge.c\
		edge_if_not_even.c edge_if_even.c find_lower.c full_stack_a.c write_first_part.c\
		make_operation_fp.c is_rotatetop_b.c find_here_pursuit.c btm_way.c sort_list.c sort_arr.c\
		find_pursuit.c what_about_rotate_top.c what_about_swap.c maybe_double_s.c\
		double_rotatebtm.c choose_operation_sp.c ok_go_top_sp.c ok_go_btm_sp.c find_max_sp.c\
		find_prvs_sp.c find_next_sp.c is_top_way_sp.c are_you_here.c find_diapazon_sp.c\
		find_sequence_next_sp.c find_sequence_prvs_sp.c is_between_sp.c check_conc_sp.c double_rotatebtm.c\
		is_el1_faster_el2.c just_do_it.c ft_lstdelone.c ft_lstclear.c\
		are_you_correct.c is_str_digits.c ft_split.c ft_strdup.c ft_strlcpy.c ft_strlen.c\
		ft_strtrim.c check_na_int.c ft_strncmp.c check_no_iteration.c del_matrix.c go_go_go.c\
		jdi_if_el1_big.c jdi_if_el2_big.c ogt_choose_way_top.c ogt_drobim.c ogb_push_top.c


OBJS = $(SRCS:%.c=%.o)
LIBNAME = libpushswap.a
HEADER = libpushswap.h
CFLAGS = -Wall -Wextra -Werror -I.
RM = rm -f
CC = gcc
MAIN = push_swap.c
PROG = push_swap

exe		:	lib
	$(CC) $(MAIN) $(LIBNAME) -o $(PROG)

lib		:	$(LIBNAME)

ofiles	:
	$(CC) $(CFLAGS) -c $(SRCS)

$(LIBNAME)	:	$(OBJS) $(HEADER)
	ar rcs $(LIBNAME) $?

clean	:
	$(RM) $(OBJS)

fclean	:
	$(RM) $(OBJS) $(LIBNAME)