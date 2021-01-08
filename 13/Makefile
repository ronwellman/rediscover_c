CC=gcc
CFLAGS+= -g -Wall -Wextra -Wpedantic -std=c89
SOURCES= $(wildcard *.c)
BINS= $(patsubst %.c, %, $(SOURCES))

.PHONY: all clean

all: board

board: board.c board.h

clean:
	rm -rf *.o $(BINS)
