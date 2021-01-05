#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	int n;
	int *ptr = NULL;
	int *temp = NULL;
	if(argc == 2) {
		n = atoi(argv[1]);
		/* sizeof(*ptr) == sizeof(int) */
		ptr = calloc(n * sizeof(*ptr));
		if(NULL == ptr) {
			fprintf(stderr, "Allocation failed!\n");
			return -1;
		}

		printf("size: %ld\n", n * sizeof(*ptr));
		printf("address: %p\n", (void *)ptr);
		
		/*double the size of our allocation */
		n *= 2;
		temp = realloc(ptr, n * sizeof(*ptr));
		if (NULL == temp) {
			fprintf(stderr, "Failed to realloc.\n");
			free(ptr);
			return -1;
		}
		/* if the larger memory had to be moved, ptr now points to free'd memory */
		ptr = temp;
		printf("address: %p\n", (void *)ptr);

		free(ptr);
		/* avoid "use after free" and "double free" by setting to NULL */
		ptr = NULL;
	}
	return 0;
}
