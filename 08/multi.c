#include <stdio.h>

#define DIM 11

int main() {
	int table[DIM][DIM] = { 0 };

	for(int row = 0; row < DIM; row++) {
		for(int col = 0; col < DIM; col++) {
			table[row][col] = row * col;
		}
	}

	for(int row = 0; row < DIM; row++) {
		for(int col = 0; col < DIM; col++) {
			printf("%3d ", table[row][col]);
		}
		printf("\n");
	}
	return 0;
}
