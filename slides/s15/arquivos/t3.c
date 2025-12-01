#include <stdio.h>
int main()
{
	FILE *fp;

	fp = fopen("test.txt", "r+");
	if(fp == NULL) {
		fprintf(stderr, "erro na abertura do arquivo\n");
	} else {
		fprintf(fp, "arquivo aberto em modo r+...\n");
		fclose(fp);
	}
}
