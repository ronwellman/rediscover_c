#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	int n;
	/* this is a bad idea */
	if(argc == 2) {
		n = atoi(argv[1]);
		int array[n];
		printf("size: %ld\n", sizeof(array));
	}
	return 0;
}
