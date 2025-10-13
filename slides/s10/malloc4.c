#include <stdio.h>
#include <stdlib.h>

int main() {
	int *v;
	int n, i;

	scanf("%d", &n);
	v = malloc(n*sizeof(int));

	for(i = 0; i < n; i++) {
		scanf("%d", &v[i]);
	}

	free(v);
	return 0;
}

