#include <stdio.h>
#include <string.h>

int main() {

	char str1[100];
	char str2[100];

	printf("Digite duas palavras: ");
	scanf("%s %s", str1, str2);
	printf("Resultado da comparacao: %d\n", strcmp(str1, str2));

	return 0;
}
