#include<stdio.h>

int main() {
    int n, senha, cont;

    cont = -1;
    senha = 6;

    do {
        cont++;
        printf("Digite um número inteiro entre 1 e 10\n");
        scanf("%d", &n);
    } while (n != senha);

    printf("Você errou %d vezes\n", cont);

    return 0;
}