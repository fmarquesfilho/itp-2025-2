#include <stdio.h>

//retorna a + (a+1) + ... + (b-1) + b (sem usar formula fechada)
int somatorio(int a, int b) {
	int soma = 0, i;
	for(i = a; i <= b; i++) {
		soma += i;
	}
	return soma;
}

int main() {

	printf("Somatorio de 1 a 5 = %d\n", somatorio(1, 5));
	printf("Somatorio de 10 a 40 = %d\n", somatorio(10, 40));

	return 0;
}

