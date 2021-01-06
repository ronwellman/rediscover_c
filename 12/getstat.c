#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h>

#define MYFILE "testfile"

int main() {
	struct stat sb = { 0 };
	int result;

	result = stat(MYFILE, &sb);
	if (result != 0) {
		fprintf(stderr, "Unable to stat: %s\n", MYFILE);
		if (errno == ENOENT) {
			fprintf(stderr, "%s does not exist.\n", MYFILE);
		}
		return 1;
	}

	printf("UID: %d\n", sb.st_uid);
	printf("Mode: %d\n", sb.st_mode);
	printf("Reg File: %d\n", S_ISREG(sb.st_mode));
	printf("Dir: %d\n", S_ISDIR(sb.st_mode));

	return 0;
}
