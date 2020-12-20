#include <stdio.h>

int main(){
	int a = 5;
	int b = 3;
	float c = a / (float)b;
	printf("%d / %d = %f\n", a, b, c);
	
	int d = a % b;
	printf("%d mod %d = %d\n", a, b, d);
	return 0;
}
