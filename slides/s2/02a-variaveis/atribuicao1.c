#include <stdio.h>

int main() {

	int a = 3;
	printf("Valor da variavel a: %d\n", a);
	printf("Endereco da variavel a: %p\n", &a);
	a = a + 2;
	printf("Valor da variavel a: %d\n", a);

	return 0;
}

