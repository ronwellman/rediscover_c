#include <stdio.h>
#include <string.h>

#define MYFILE "testfile"

int main() {
	FILE *fp;
	size_t bytes;
	char *outbuffer = "I want to write to a file!!!\n";
	char inbuffer[10] = { 0 };
	int result;

	/* open file */
	fp = fopen(MYFILE, "w");
	if (NULL == fp) {
		fprintf(stderr, "Unable to open %s for write\n", MYFILE);
		return 1;
	}

	/* write to file */
	bytes = fwrite(outbuffer, sizeof(char), strlen(outbuffer), fp);
	printf("%ld bytes written.\n", bytes);

	/* close file */
	result = fclose(fp);
	if(0 != result) {
		fprintf(stderr, "Unable to close file: %s.\n", MYFILE);
		return 1;
	}

	/* open file */
	fp = fopen(MYFILE, "r");
	if (NULL == fp) {
		fprintf(stderr, "Unable to open %s for write\n", MYFILE);
		return 1;
	}

	/* read from the file in chunks */
	while((bytes = fread(inbuffer, sizeof(char), sizeof(inbuffer) - 1, fp)) > 0) {
		inbuffer[bytes] = 0;
		printf("Bytes read: %ld %s\n", bytes, inbuffer);
	}

	/* close file */
	result = fclose(fp);
	if(0 != result) {
		fprintf(stderr, "Unable to close file: %s.\n", MYFILE);
		return 1;
	}

	return 0;
}
