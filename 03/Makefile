CC=gcc

.PHONY: all clean

all: chars sizes64 sizes32

chars: chars.c

sizes64: sizes.c
	$(CC) -o $@ $^

sizes32: sizes.c
	$(CC) -m32 -o $@ $^

clean:
	rm -rf chars sizes32 sizes64
