#include <stdio.h>
int main()
{
	FILE *fp;
	char s[200];

	fp = fopen("test.txt", "w+");
	if(fp == NULL) {
		fprintf(stderr, "erro na abertura do arquivo\n");
	} else {
		fgets(s, 200, fp);
		printf("[%s]\n", s);
		fprintf(fp, "This is testing for fprintf (w+)...\n");
		fputs("This is testing for fputs (w+)...\n", fp);
		fclose(fp);
	}
}
