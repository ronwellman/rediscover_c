#include <stdio.h>

int main() {
	int x = 5;
	int *y = &x;
	// uninitialized
	int *z;

	printf("x: %p\n", (void *)&x);
	printf("y: %p\n", (void *)y);
	printf("z: %p\n", (void *)z);

	*y = 10;
	printf("x: %d\n", x);
	printf("z: %d\n", *z);
	return 0;
}
