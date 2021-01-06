CC=gcc
CFLAGS+= -g -Wall -Wextra -Wpedantic -std=c89
SOURCES= $(wildcard *.c)
BINS= $(patsubst %.c, %, $(SOURCES))

.PHONY: all clean

clean:
	rm -rf *.o $(BINS)
