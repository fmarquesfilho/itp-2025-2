#include <stdio.h>

int main() {

	int n;

	printf("Digite um numero: ");
	scanf("%d", &n);

	if(n%1 == 0)
		printf("1 divide %d\n", n);
	if(n%2 == 0)
		printf("2 divide %d\n", n);
	if(n%3 == 0)
		printf("3 divide %d\n", n);

	return 0;
}
