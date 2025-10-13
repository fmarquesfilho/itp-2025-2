#include <stdio.h>

void zerar(int *a) {
	*a = 0;
}

int main() {

	int x;
	x = 5;
	zerar(&x);
	printf("%d\n", x);

	return 0;
}

