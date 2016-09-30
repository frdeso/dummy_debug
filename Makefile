CC = gcc
CFLAGS=-g -Wall -O0

all: main.c header.h object.o
	$(CC) $(CFLAGS) -o main main.c object.o

object.o: object.c object.h
	$(CC) -c $(CFLAGS) -o object.o object.c

clean:
	rm -f main
