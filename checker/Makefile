SRCS = get_next_line.c print.c is_str_digits.c full_stack_a.c check_na_int.c is_it_sorted.c\
		are_you_correct.c check_no_iteration.c del_matrix.c ft_strtrim.c ft_strjoin.c\
		ft_atoi.c ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstlast.c\
		ft_lstnew.c ft_lstsize.c ft_split.c ft_strdup.c ft_strlcpy.c ft_strlen.c ft_strncmp.c\
		swap.c rotate_top.c rotate_btm.c push.c double_swap.c double_rotatetop.c double_rotatebtm.c\
		start_check.c

OBJS = $(SRCS:%.c=%.o)
LIBNAME = libchecker.a
HEADER = libchecker.h
CFLAGS = -Wall -Wextra -Werror -I.
RM = rm -f
CC = gcc
MAIN = checker.c
PROG = checker

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