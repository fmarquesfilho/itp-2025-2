#include <stdio.h>

int main(int argc, char **argv) {

	int i;

	printf("Quantidade de parametros: %d\n", argc);
	for(i = 0; i < argc; i++) {
		printf("Parametro %d: %s\n", i, argv[i]);
	}

	return 0;
}
