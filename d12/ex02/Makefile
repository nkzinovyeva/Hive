# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nzinovye <nzinovye@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/22 13:11:20 by nzinovye          #+#    #+#              #
#    Updated: 2019/07/25 12:53:57 by nzinovye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
SRC = main.c
CFLAGS = -Wall -Wextra -Werror
OBJ = main.o


all: $(NAME)

$(NAME):
	gcc  $(CFLAGS) $(SRC) -o $(NAME);

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

