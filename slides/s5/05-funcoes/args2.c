#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv) {

	if(strcmp(argv[1], "somar") == 0) {
		printf("Soma: %d\n", atoi(argv[2]) + atoi(argv[3]));
	} else {
		if(strcmp(argv[1], "multiplicar") == 0) {
			printf("Produto: %d\n", atoi(argv[2]) * atoi(argv[3]));
		} else {
			if(strcmp(argv[1], "subtrair") == 0) {
				printf("Subtracao: %d\n", atoi(argv[2]) - atoi(argv[3]));
			} else {
				printf("Divisao: %d\n", atoi(argv[2])/atoi(argv[3]));
			}
		}
	}

	return 0;
}
