#include <stdio.h>

int main() {

	char palavra[] = "asa";

	palavra[1] += 1;
	printf("%s\n", palavra); //escreve ata
	palavra[2] = 111;
	printf("%s\n", palavra); //escreve ato

	return 0;
}
