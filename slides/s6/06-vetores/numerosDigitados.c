#include <stdio.h>

int main() {

	int numeros[10];
	int n;

	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%d", &numeros[i]);

	printf("Os numeros digitados foram: ");
	for(int i = 0; i < n; i++)
		printf("%d", numeros[i]);

	return 0;
}
