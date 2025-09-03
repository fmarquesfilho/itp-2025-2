#include <stdio.h>

int main() {
	
	int a, b;

	printf("Digite dois numeros: ");
	scanf("%d %d", &a, &b);

	//trocando os valores das duas variaveis
	a = b;
	b = a;

	return 0;
}
