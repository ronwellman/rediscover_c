#include <stdio.h>
#include <stdbool.h>

int main() {
	int a = 10;
	int b = 5;

	printf("a < b: %d\n", a < b);
	printf("b is even and a is even: %d\n", b % 2 && a % 2);
	printf("true or false: %s\n",true || false ? "true": "false");
	return 0;
}
