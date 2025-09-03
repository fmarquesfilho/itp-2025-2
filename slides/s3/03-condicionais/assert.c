#include <assert.h>
#include <stdio.h>

int main() {
	
	int n;

	n = 1;

	//em tese n deve chegar aqui com um valor diferente de 0
	//nao eh um teste para validar n
	//e sim um teste para garantir que n eh diferente de zero
	assert(n != 0);

	printf("10 dividido por n: %f\n", 10.0/n);

	return 0;
}
