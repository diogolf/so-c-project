#Simple example of makefile
objects = ex21.o
ex21: ex21.o
	gcc -o ex21 $(objects) -lm
ex21.o: ex21.c ex21.h
	gcc -c ex21.c
clean:
	rm ex21 $(objects)
