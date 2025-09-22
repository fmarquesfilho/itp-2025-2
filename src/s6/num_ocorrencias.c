#include<stdio.h>

int main () {
    // numOcorrencias[0] - contagem de 1
    // numOcorrencias[1] - contagem do 2
    // (...)
    // numOcorrencias[8] - contagem do 9
    int numOcorrencias[9], x, i;

    for (i = 0; i < 9; i++) {
        numOcorrencias[i] = 0;
    }

    do {
        scanf("%d", &x);
        numOcorrencias[x-1]++;
    } while (x != 0);

    for (i = 0; i < 9; i++) {
        printf("O número %d ocorreu %d vezes.\n", i + 1, numOcorrencias[i]);
    }

    return 0;
}