# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nzinovye <nzinovye@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/23 11:02:25 by nzinovye          #+#    #+#              #
#    Updated: 2019/07/23 14:07:56 by nzinovye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SRC = srcs/ft_atoi.c srcs/ft_putnbr.c srcs/ft_putchar.c
CFLAGS = -Wall -Wextra  -Werror
HEADER = includes/ft.h

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -o $(NAME) main.c $(SRC)
	
clean:
	/bin/rm -f ft_atoi.o ft_putnbr.o ft_putchar.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
