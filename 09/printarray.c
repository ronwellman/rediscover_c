#include <stdio.h>

void printarray(int *, int);
int sum(int *, int, int *);

int main() {
	int numbers[] = { 1,2,3,4,5,6,7,8,9 };
	int primes[] = { 2,3,5,7 };
	int *garbage = NULL;
	int status;
	int val; 

	printf("elements numbers: %ld\n", sizeof(numbers) / sizeof(int));
	printf("elements primes: %ld\n", sizeof(primes) / sizeof(int));

	printarray(numbers, sizeof(numbers) / sizeof(int));
	printarray(primes, sizeof(primes) / sizeof(int));
	// invalid pointer address
	printarray(garbage, 2);
	
	// pass by reference (val)
	status = sum(numbers, sizeof(numbers) / sizeof(int), &val);
	printf("Status: %d\n", status);
	printf("Sum: %d\n", val);
	status = sum(primes, sizeof(primes) / sizeof(int), &val);
	printf("Status: %d\n", status);
	printf("Sum: %d\n", val);

	// invalid pointer adddress results in a status of -1
	status = sum(garbage, sizeof(primes) / sizeof(int), &val);
	printf("Status: %d\n", status);
	printf("Sum: %d\n", val);

	return 0;
}

void printarray(int array[], int elements) {
	// check array before trying to reach into it
	if (NULL == array) {
		fprintf(stderr, "array is NULL\n");
		return;
	}

	for(int i = 0; i < elements; i++) {
		printf("%d ", array[i]);
	}

	printf("\n");
}

int sum(int array[], int elements, int *val) {
	// check all pointers before trying to use them
	if (NULL == array || NULL == val) {
		fprintf(stderr, "pointer is NULL\n");
		return -1;
	}

	*val = 0;

	for(int i = 0; i < elements; i++) {
		*val += array[i];
	}

	return 0;
}
