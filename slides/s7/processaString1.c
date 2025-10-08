#include <stdio.h>
#include <string.h>

int main() {

	char frase[100];

	gets(frase);
	for(int i = 0; i < strlen(frase); i++) {
		if(frase[i] == ' ') {
			frase[i] = '-';
		}
	}
	printf("%s\n", frase);

	return 0;
}
