# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/19 19:18:55 by acanterg          #+#    #+#              #
#    Updated: 2021/09/06 15:25:46 by acanterg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	srcs/functions/ft_atoi.c \
			srcs/functions/ft_error.c \
			srcs/functions/ft_putnbr.c \
			srcs/functions/ft_putstr.c \
			srcs/functions/ft_putchar.c \
			srcs/functions/ft_strcmp.c \
			srcs/functions/ft_strlen.c \
			srcs/push_swap/actions.c \
			srcs/push_swap/exec.c \
			srcs/push_swap/find.c \
			srcs/push_swap/get.c \
			srcs/push_swap/init.c \
			srcs/push_swap/print.c \
			srcs/push_swap/quit.c \
			srcs/push_swap/sorting.c \
			srcs/push_swap/sorting_big.c \
			srcs/push_swap/utils.c

SRCS_P	=	$(SRCS) \
			srcs/push_swap/push_swap.c

SRCS_C	=	$(SRCS) \
			srcs/checker/checker.c \
			srcs/checker/get_next_line/get_next_line.c \
			srcs/checker/get_next_line/get_next_line_utils.c


GCC		= gcc
CFLAGS	= -Wall -Wextra -Werror
FSANIT  =  -fsanitize=address -static-libasan -g
INCLUD	= -I includes
NAME	= push_swap
CHECKER	= checker
NUMBERS =  1 9 5 8

all : 		$(NAME) $(CHECKER)

$(NAME) :	
			@ $(GCC) $(CFLAGS) $(FSANIT) $(INCLUD) $(SRCS_P) -o $(NAME)

$(CHECKER) :	
			@ $(GCC) $(CFLAGS) $(FSANIT) $(INCLUD) $(SRCS_C) -o $(CHECKER)

test :		re
			./$(NAME) $(NUMBERS)

check :		re
			./$(NAME) $(NUMBERS) | ./checker $(NUMBERS)

count :		re
			./$(NAME) $(NUMBERS) | wc -l

clean :
			@ rm -f $(NAME) $(CHECKER)

bonus :		all

fclean :	clean

re :		fclean all

.PHONY: 	all clean fclean re bonus test check count