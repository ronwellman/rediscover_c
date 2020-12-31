#include <stdio.h>

int main() {

	int coin = 10;

	switch (coin) {
		case 25:
			printf("You purchase a soda pop.\n");
			// falls through
		case 10:
			printf("You purchase a lolly pop.\n");
			// falls through
		case 5:
			printf("You purchase gum.\n");
			break;
		default:
			printf("You don't have enough money to buy anything.\n");
	}

	return 0;
}
