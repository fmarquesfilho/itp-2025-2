#include <stdio.h>

void funcao(int v[], int n) {
	int i;
	for(i = 0; i < n; i++)
		printf("%d ", v[i]);
	printf("\n");
}

int main() {

	int vetor[] = {3, 4, 2, 1, 7};
	funcao(vetor, 5);

	return 0;
}
