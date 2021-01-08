#include <stdio.h>
#include "board.h"

static void printPos(coord);
static int walkLeft(coord *, unsigned int);

int main() {
	coord hero = { 256, 256 };
	int result;

	printPos(hero);
	
	result = walkLeft(&hero, 50);
	if (0 == result) {
		printf("Walked left!\n");
	}

	printPos(hero);

	return 0;
}

static void printPos(coord c) {
	printf("X: %d Y: %d\n", c.x, c.y);
}

static int walkLeft(coord *c, unsigned int steps) {
	if (NULL == c) {
		fprintf(stderr, "NULL pointer.\n");
		return 1;
	}

	if (c->x - steps < c->x) {
		c->x -= steps;
		return 0;
	}
	return 1;
}
