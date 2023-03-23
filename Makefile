CC=gcc
CFLAGS=-Wall -Werror -pedantic

all:
	${CC} ${CFLAGS} *.c -o factors
clean:
	rm *.out *.o
