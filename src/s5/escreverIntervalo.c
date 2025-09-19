#include<stdio.h>

int somatorio(int a, int b) {
    int soma = 0, i;
    for (i = a; i <= b; i++) {
        soma += i;
    }
    return soma;
}

void escreverIntervalo(int a, int b) {
    int i;
    for (i = a; i <= b; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int x, y, s;

    printf("Digite os valores inicial e final de um intervalo (separados por espaço):\n");
    scanf("%d %d", &x, &y);

    escreverIntervalo(x, y);
    s = somatorio(x, y);
    printf("O somatório é %d.\n", s);

    return 0;
}