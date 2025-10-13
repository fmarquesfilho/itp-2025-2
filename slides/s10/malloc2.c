#include <stdio.h>
#include <stdlib.h>

int main() {
	int *v;
	v = malloc(4*sizeof(int));
	v[0] = 4;
	v[1] = 7;
	v[2] = 3;
	v[3] = 1;
	v[4] = 9;
	return 0;
}

