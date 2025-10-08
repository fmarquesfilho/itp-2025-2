#include <stdio.h>
#include <unistd.h>
int main() {
	int n, i, soma = 0;
	printf("Soma 10 numeros (mas nao entre com zero!)\n");
	for(i = 1; i <= 10; i++) {
		printf("Digite um numero: ");
		scanf("%d", &n);
		if(n == 0) {
			printf("Avisei! Apagando o seu HD (please wait)\n");
			sleep(3);
			printf("Brincadeira!\n");
			break;
		}
		soma = soma + n;
	}
	printf("Soma = %d\n", soma);
	return 0;
}
