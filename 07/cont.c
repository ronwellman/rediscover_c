#include <stdio.h>

int main() {

	for(int i = 0; i < 20; i++) {
		if (i % 2 == 0) {
			continue;
		}

		if (i > 10) {
			break;
		}

		printf("%d\n", i);
	}

	return 0;
}
