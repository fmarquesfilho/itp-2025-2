#include <stdio.h>
int main()
{
	FILE *fp;
	char s[200];

	fp = fopen("test.txt", "w");
	if(fp == NULL) {
		fprintf(stderr, "erro na abertura do arquivo\n");
	} else {
		fgets(s, 200, fp);
		printf("lido do arquivo: %s\n", s);
		fprintf(fp, "arquivo aberto em modo w...\n");
		fclose(fp);
	}
}
