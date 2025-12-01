#include<stdio.h>

int main() {
    int a, b;
    FILE * arq;

    scanf("%d %d", &a, &b);

    arq = fopen("teste.txt", "a");
    for (int i = a + 1; i < b; i++)
        fprintf(arq, "%d ", i);

    fprintf(arq, "\n");

    fclose(arq);

    return 0;
}