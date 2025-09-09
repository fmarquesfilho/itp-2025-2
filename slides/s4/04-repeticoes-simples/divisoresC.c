#include <stdio.h>

int main() {

	int i, n;
	printf("Digite um numero: ");
	scanf("%d", &n);

	i = 1;
	while(i <= 100) {
		if(n%i == 0) {
			printf("%d\n", i);
		}
		i = i + 1;
	}

	return 0;
}

