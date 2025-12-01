#include <stdio.h>
int main()
{
	FILE *fp;
	char s[200];
	char modosString[][3] = {"r", "w", "r+", "w+", "a", "a+"};
	int modo;

	printf("Digite o modo de abertura do arquivo: 0 (r), 1 (w), 2 (r+), 3(w+), 4 (a), 5 (a+)\n");
	scanf("%d", &modo);

	fp = fopen("test.txt", modosString[modo]);
	if(fp == NULL) {
		fprintf(stderr, "erro na abertura do arquivo\n");
	} else {
		fgets(s, 200, fp);
		printf("lido do arquivo: %s\n", s);
		fprintf(fp, "texto escrito quando o arquivo foi aberto em modo %s...\n", modosString[modo]);
		fclose(fp);
	}
}
