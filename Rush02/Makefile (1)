# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/27 17:02:52 by mnenonen          #+#    #+#              #
#    Updated: 2019/07/28 13:34:31 by sreijola         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=colle-2

NAME2=rush00

SOURCES=srcs/ft_bot.c srcs/ft_rush_collector.c srcs/ft_top.c srcs/ft_mid.c\
		srcs/ft_strcpy.c srcs/ft_read.c srcs/ft_strncpy.c srcs/ft_putstr.c\
		srcs/main.c

SOURCES2=srcs/rush00_main.c srcs/ft_make_one.c srcs/ft_bot.c srcs/ft_top.c srcs/ft_mid.c\
		 srcs/ft_strcpy.c srcs/ft_strncpy.c srcs/ft_putstr.c

all:
	gcc -Iincludes $(SOURCES) -o $(NAME)

all00:
	gcc -Iincludes $(SOURCES2) $ -o $(NAME2)

fclean:
	/bin/rm -f $(NAME)

lldb: fclean
	gcc -Iincludes -g $(SOURCES) -o debug_$(NAME)
	lldb debug_$(NAME)
	run

re: fclean all


