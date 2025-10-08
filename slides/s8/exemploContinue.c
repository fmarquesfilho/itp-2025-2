#include <stdio.h>
#include <unistd.h>
int main() {
	int n, i, soma = 0;
	printf("Soma 10 numeros (mas nao entre com negativo!)\n");
	for(i = 1; i <= 10; i++) {
		printf("Digite um numero: ");
		scanf("%d", &n);
		if(n < 0) {
			printf("Voce sera punido com 5s de espera\n");
			sleep(5);
			continue;
		}
		soma = soma + n;
	}
	printf("Soma = %d\n", soma);
	return 0;
}
