CC=gcc
CFLAGS+= -Wall -Wextra -Wpedantic
SOURCES= $(wildcard *.c)
BINS= $(patsubst %.c, %, $(SOURCES))

.PHONY: all clean

clean:
	rm -rf *.o $(BINS)
