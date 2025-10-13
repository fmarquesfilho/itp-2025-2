#include <stdio.h>

int main() {

	int *a;
	char b;

	b = 'f';
	a = &b;
	printf("Valor de b: %d\n", *a);

	return 0;
}

