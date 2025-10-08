#include <stdio.h>

int main() {

	char frase[5];
	fgets(frase, 5, stdin);
	if(frase[strlen(frase)-1] == '\n') {
		frase[strlen(frase)-1] = '\0';
	}
	printf("%s\n", frase);

	return 0;
}

