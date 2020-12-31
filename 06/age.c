#include <stdio.h>

int main(){
	int age = 16;

	if (age >= 18) {
		printf("congrats, you can vote\n");
	} else if (age >= 16) {
		printf("Be careful with the car.\n");
	} else {
		printf("You cannot vote yet, nor can you drive\n");
	}

	return 0;
}
