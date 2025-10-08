#include <stdio.h>
#include <string.h>

int main() {

	char str1[] = "Aviao";
	char str2[100] = "Carro";

	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	strncpy(str2, str1, 3);
	str2[3] = '\0';
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);

	return 0;
}
