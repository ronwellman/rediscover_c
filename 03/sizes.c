#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

int main() {
	char c = 'A';
	short s = 200;
	int i = 5;
	long l = -567;
	uint32_t t = 5555;
	float f = 3.1415;
	double d = 1.33;
	printf("char: %ld\n", sizeof(c));
	printf("short: %ld\n", sizeof(s));
	printf("int: %ld\n", sizeof(i));
	printf("long: %ld\n", sizeof(l));
	printf("uint32_t: %ld\n", sizeof(t));
	printf("float: %ld\n", sizeof(f));
	printf("double: %ld\n", sizeof(d));
	return 0;
}
