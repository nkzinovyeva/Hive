# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/27 17:02:52 by mnenonen          #+#    #+#              #
#    Updated: 2019/07/28 23:46:42 by mnenonen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=colle-2

SOURCES=srcs/ft_bot.c srcs/ft_rush_collector.c srcs/ft_top.c srcs/ft_mid.c\
		srcs/ft_strcpy.c srcs/ft_read.c srcs/ft_strncpy.c srcs/ft_putstr.c\
		srcs/main.c srcs/ft_putnbr.c

all:
	gcc -Iincludes $(SOURCES) -o $(NAME)

fclean:
	/bin/rm -f $(NAME)

lldb: fclean
	gcc -Iincludes -g $(SOURCES) -o debug_$(NAME)
	lldb debug_$(NAME)
	run

re: fclean all
