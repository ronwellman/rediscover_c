#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BET 5

int main() {
	int coins = 50;
	int chance;
	time_t t = time(NULL);
	srandom(t);

	while (coins >= BET) {
		chance = random() % 100;

		if (chance > 75) {
			coins += BET;
			printf("You win!\n");
		} else {
			coins -= BET;
			printf("You lose\n");
		}
	}

	return 0;
}
