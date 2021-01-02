#include <stdio.h>
#include <string.h>

int main() {
	char *string1 = "first string";
	char string2[] = "second string";
	char string3[] = "third string";

	printf("%s\n", string1);
	printf("%s\n", string2);

	string2[0] = 'S';
	printf("%s\n", string2);
	
	printf("Length string3: %ld\n", strlen(string3));
	printf("last char: %d\n", string3[12]);

	// overwriting null terminator
	string3[12] = 'X';
	printf("%s\n", string3);
	printf("%s\n", string2);

	// overflow
	strcpy(string3, "This string is large");
	printf("%s\n", string3);
	printf("%s\n", string2);

	return 0;
}
