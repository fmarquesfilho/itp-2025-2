#include <stdio.h>

int main() {

	char palavra1[] = {'I', 'M', 'D'};
	char palavra2[10] = "IMD";

	palavra2 = "alo"; //nao funciona
	palavra2[0] = 'a';
	palavra2[1] = 'l';
	palavra2[2] = 'o';
	palavra2[3] = '\0';
	return 0;
}
