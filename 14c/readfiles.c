#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>

void *readfile(void *);

int main(int argc, char **argv) {
	int numfiles = argc - 1;
	int i;
	void *result = NULL;
	int ret;
	pthread_t *threads = NULL;

	if ( argc == 1 ) {
		perror("usage: ./readfiles [FILENAME...]\n");
		return 1;
	}

	threads = malloc(sizeof(*threads) * numfiles);
	if (NULL == threads) {
		fprintf(stderr, "Unable to allocate for threads.\n");
		return 1;
	}

	for (i = 0; i < numfiles; i++) {
		ret = pthread_create(&threads[i], NULL, &readfile, argv[i+1]);
		if (0 != ret) {
			perror("Unable to create thread\n");
		}
	}

	for (i = 0; i < numfiles; i++) {
		result = NULL;
		pthread_join(threads[i], &result);
		if (NULL != result) {
			printf("%s\n", (char *)result);
			free(result);
		}
	}

	free(threads);
	return 0;
}

void *readfile(void *arg) {
	char *filename = (char *)arg;
	char *buffer = NULL;
	size_t buffersize = 200;
	size_t bytesread = 0;
	FILE *fp = NULL;
	pthread_t thread = pthread_self();

	fp = fopen(filename, "r");
	if(NULL == fp) {
		fprintf(stderr, "%ld unable to open: %s\n", thread, filename);
		pthread_exit(NULL);
	}

	buffer = calloc(buffersize, sizeof(char));
	if (NULL == buffer) {
		perror("Unable to allocate buffer.\n");
		pthread_exit(NULL);
	}

	bytesread = fread(buffer, sizeof(char), buffersize-1, fp);
	fclose(fp);
	printf("%ld read %ld bytes: %s\n", thread, bytesread, filename);

	pthread_exit(buffer);
}
