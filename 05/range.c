#include <stdio.h>

int main() {
	int i = 0;
	int b = 0;

	while (1) {
		printf("%d\n", i++);
		b++;
		if (b == 25) {
			break;
		}
		i %= 10;
	}
	return 0;
}
