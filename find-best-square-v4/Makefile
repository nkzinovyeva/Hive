all: my_stdlib converters render parser solver
	gcc bsq.c my_stdlib.o converters.o render.o parser.o solver.o -o bsq

clean:
	rm -f bsq my_stdlib.o

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
