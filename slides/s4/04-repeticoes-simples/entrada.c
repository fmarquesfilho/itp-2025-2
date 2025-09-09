#include <stdio.h>

int main() {

	int a, b;

	printf("Digite um numero inteiro A: ");
	scanf("%d", &a);
	do {
		printf("Digite um numero inteiro B: ");
		scanf("%d", &b);
	} while(b == 0);
	
	printf("A dividido por B = %f\n", ((float)a)/b);
	return 0;
}
