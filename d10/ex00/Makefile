# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nzinovye <nzinovye@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/22 13:11:20 by nzinovye          #+#    #+#              #
#    Updated: 2019/07/22 13:53:20 by nzinovye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c  \
	  srcs/ft_strlen.c srcs/ft_swap.c
CFLAGS = -Wall -Wextra -Werror
HEADER = includes/ft.h
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o


all: $(NAME)

$(NAME):
	gcc -c -I$(HEADER) $(CFLAGS) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)


fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

