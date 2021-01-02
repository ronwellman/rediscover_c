#include <stdio.h>
#include <string.h>

int main() {
	char buffer[50] = { 0 };
	char *temp;
	char garbage;

	// read at most sizeof(buffer) - 1
	temp = fgets(buffer, sizeof(buffer), stdin);

	if (NULL == temp) {
		fprintf(stderr, "No input received\n");
	} else {
		printf("%s\n", buffer);
	}

	// not a good example but did the user enter more character than
	// we could fit in buffer?	
	if (strlen(buffer) == 49) {
		// get rid of the excess characters
		while ((garbage = getc(stdin)) != EOF && garbage != '\n');
	}

	temp = fgets(buffer, sizeof(buffer), stdin);
	if (NULL == temp) {
		fprintf(stderr, "No input received\n");
	} else {
		printf("%s\n", buffer);
	}

	return 0;
}
