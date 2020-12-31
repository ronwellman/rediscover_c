#include <stdio.h>

enum money { PENNY = 1, NICKLE = 5, DIME = 10, QUARTER = 25 };

int main() {

	int coin = DIME;

	switch (coin) {
		case QUARTER:
			printf("You purchase a soda pop.\n");
			// falls through
		case DIME:
			printf("You purchase a lolly pop.\n");
			// falls through
		case NICKLE:
			printf("You purchase gum.\n");
			break;
		default:
			printf("You don't have enough money to buy anything.\n");
	}

	return 0;
}
