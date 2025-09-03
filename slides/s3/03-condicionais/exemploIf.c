#include <stdio.h>

int main() {

	int a, b;

	printf("Digite dois numeros: ");
	scanf("%d %d", &a, &b);

	if(a == b) {
		printf("Os dois numeros sao iguais.\n");
	}

	if(a != b) {
		printf("Os dois numeros sao diferentes.\n");
	}

	return 0;
}

