# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sungjuki <sungjuki@student.42seoul.k       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/08 18:51:10 by sungjuki          #+#    #+#              #
#    Updated: 2022/06/10 12:20:56 by sungjuki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -c

AR = ar
ARFLAGS = -cr

RM = rm
RMFLAGS = -f

NAME = push_swap
LIBFT = libft
LIBFT_LIB = libft.a

SRCS		=	push_swap.c \
				array_utils.c \
				array.c \
				rr.c \
				rrr.c \
				sp.c \
				sort_rotate.c \
				sort_rotate_utils.c \
				sort_utils.c \
				sort.c

OBJS		= $(SRCS:.c=.o)

all			:	$(NAME)

$(NAME)		:	$(OBJS)
		make all -C $(LIBFT)/
		gcc -o $(NAME) $(OBJS) -Llibft -lft

%.o			:	%.c
		gcc $(FLAGS) -c $^ -I./ -o $@

.Phony : all clean fclean re

all : $(NAME)

clean :
	$(RM) $(RMFLAGS) $(OBJS)
	make clean -C $(LIBFT)

fclean : clean
	$(RM) $(RMFLAGS) $(NAME)
	make fclean -C $(LIBFT)

re : fclean all
