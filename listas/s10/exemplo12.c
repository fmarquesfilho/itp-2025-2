#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int maiorDoVetor(int *v, int n, int *maior, int *indice) {
	if(n == 0)
		return 0;
	*maior = v[0];
	*indice = 0;
	for(int i = 0; i < n; i++)
		if(v[i] > *maior) {
			*maior = v[i];
			*indice = i;
		}
	return 1;
}

int main() {

	int vetor[] = {3, 6, 2, 7, 5, 4, 1, 0};
	int maior, indice;
	if(maiorDoVetor(vetor, 8, &maior, &indice))
		printf("O maior do vetor é vetor[%d] = %d\n", indice, maior);
	else
		printf("O vetor é vazio\n");

	return 0;
}
