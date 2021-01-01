#include <stdio.h>

int main() {
	char choice;

	do {
		printf("What is your choice: (a) or (b)\n");
		choice = getchar();
	} while (choice != 'a' && choice != 'b');

	return 0;
}
