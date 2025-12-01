#include <stdio.h>
int main()
{
	FILE *fp;

	fp = fopen("test.txt", "w");
	if(fp == NULL) {
		fprintf(stderr, "erro na abertura do arquivo\n");
	} else {
		fprintf(fp, "arquivo aberto em modo w...\n");
		fclose(fp);
	}
}
