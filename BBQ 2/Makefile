# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#                                                   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/29 14:45:04 by agloba            #+#    #+#              #
#    Updated: 2019/07/29 17:03:56 by agloba           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJ = my_stdlib.o converters.o render.o parser.o solver.o

all: my_stdlib converters render parser solver
	gcc bsq.c my_stdlib.o converters.o render.o parser.o solver.o -o bsq

clean:
	rm -f bsq $(OBJ)

bsq:
	gcc -c $@.c -o $@.o

my_stdlib:
	gcc -c $@.c -o $@.o

converters:
	gcc -c $@.c -o $@.o

render:
	gcc -c $@.c -o $@.o

parser:
	gcc -c $@.c -o $@.o

solver:
	gcc -c $@.c -o $@.o
