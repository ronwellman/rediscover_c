CC=gcc
CFLAGS+= -Wall -Wextra -Wpedantic
.PHONY: all clean

all: hello

hello: hello.c utility.o

utility.o: utility.h utility.c

clean:
	rm -rf *.o hello
