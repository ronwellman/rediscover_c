#include <stdio.h>

int main() {
	int a = 10;
	int b = 7;
	int c;

	c = a + b++;
	printf("a: %d b: %d c: %d\n", a, b, c);
	
	c = a + ++b;
	printf("a: %d b: %d c: %d\n", a, b, c);

	return 0;
}
