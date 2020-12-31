#include <stdio.h>

int main() {

	int coin = 5;

	switch (coin) {
		case 5:
			printf("You have a nickle.\n");
			break;
		case 10:
			printf("You have a dime.\n");
			break;
		case 25:
			printf("You have a quarter.\n");
			break;
		default:
			printf("I don't know what you have.\n");
	}

	return 0;
}
