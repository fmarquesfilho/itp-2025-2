#include <stdio.h>

int main() {

	char string[] = "Esta eh uma string de teste";
	int cont = 0;

	char *p = string;
	while(*p != '\0') {
		cont++;
		p++;
	}
	printf("Tamanho da string: %d\n", cont);

	return 0;
}

