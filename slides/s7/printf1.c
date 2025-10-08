#include <stdio.h>

int main() {

	char frase[300] = "IMD 2018";

	printf("%s\n", frase);

	frase[5] = '\0';

	printf("%s\n", frase);

	return 0;
}
