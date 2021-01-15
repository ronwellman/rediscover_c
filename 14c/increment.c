#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <errno.h>
#include <pthread.h>

/* avoid unused variable warning */
#define UNUSED(x) (void)(x)

/* function that each thread will execute */
void *increment(void *);

/* global variable to increment */
long cnt = 0;
pthread_mutex_t mtx = { 0 };

int main(int argc, char **argv) {
	long threadCnt;
	char *endptr = NULL;
	pthread_t *threads = NULL;
	long i;
	int result;

	/* check cli args */
	if (2 != argc) {
		perror("usage: ./increment NUM\n");
		return 1;
	}
	
	threadCnt = strtol(argv[1], &endptr, 10);
	if ((errno == ERANGE && (threadCnt == LONG_MAX || threadCnt == LONG_MIN))
			|| (errno != 0 && threadCnt == 0) || threadCnt <= 0) {
		fprintf(stderr, "Invalid Number: %s\n", argv[1]);
		return 1;
	}

	if (endptr == argv[1]) {
		perror("No digits were found\n");
		return 1;
	}

	/* initialize the mutex */
	pthread_mutex_init(&mtx, NULL);
	
	/* allocate space for all of the threads */
	threads = malloc(sizeof(*threads) * threadCnt);
	if (NULL == threads) {
		perror("Unable to allocate for threads.\n");
		return 1;
	}

	/* create the threads */
	for (i = 0; i < threadCnt; i++) {
		result = pthread_create(&threads[i], NULL, &increment, NULL);
		if (0 != result) {
			fprintf(stderr, "Failed to create thread.");
		}
	}

	/* wait on the threads to finish */
	for (i = 0; i < threadCnt; i++) {
		pthread_join(threads[i], NULL);
	}

	printf("cnt: %ld\n", cnt);

	pthread_mutex_destroy(&mtx);
	free(threads);
	return 0;
}

void *increment(void *arg) {
	int result;
	UNUSED(arg);

	/* protect the shared resource by only allow the thread
	   that holds the lock to update the resource.  all other
	   threads must wait until the mutex is unlocked */
	result = pthread_mutex_lock(&mtx);
	if (0 == result) {
		cnt += 1;
		pthread_mutex_unlock(&mtx);
	}
	
	return NULL;
}
