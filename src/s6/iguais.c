#include<stdio.h>

int main() {
    int vet[10], n, i, x, cont = 0;

    printf("Digite um inteiro n: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Digite o número para posição %d do vetor: ", i);
        scanf("%d", &vet[i]);
    }

    printf("Digite um número inteiro x: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        if (vet[i] == x) {
            cont++;
        }
    }

    printf("O número %d foi encontrado %d vezes no vetor.\n", x, cont);

    return 0;
}