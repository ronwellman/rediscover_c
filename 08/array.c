#include <stdio.h>

#define ARRAYSIZE 5

int main() {
	// uninitialized
	int integers[ARRAYSIZE];
	printf("sizeof integers: %ld\n", sizeof(integers));
	printf("elements: %ld\n", sizeof(integers) / sizeof(int));

	printf("address: %p\n", (void *)integers);
	printf("address: %p\n", (void *)(integers + 1));

	for(int i = 0; i < ARRAYSIZE; i++) {
		printf("%d\n", integers[i]);
	}

	// initialized
	float floats[ARRAYSIZE] = { 0 }; 
	for(int i = 0; i < ARRAYSIZE; i++) {
		printf("%f\n", floats[i]);
	}

	return 0;
}
