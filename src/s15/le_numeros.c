#include<stdio.h>

int main() {
    FILE * arq;
    int x;

    arq = fopen("numeros.txt", "r");
    while (fscanf(arq, "%d", &x) != EOF) {
        printf("%d\n", x);
    }

    fclose(arq);

    return 0;
}