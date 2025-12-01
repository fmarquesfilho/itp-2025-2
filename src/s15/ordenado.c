#include<stdio.h>

int ordenado(int *v, int n) {
    // Caso base:  é quando eu tenho 1 só elemento, que por
    // definição, já está ordenado
    if (n <= 1) {
        return 1; // verdadeiro
    }

    if (v[0] > v[1]) {
        return 0; // falso
    }

    return ordenado(v + 1, n - 1);
}

int main() {
    int a[5] = {0, 1, 3, 4, 100};

    // verifica se o vetor a está ordenado chamando a função
    if (ordenado(a, 5)) {
        printf("O vetor está ordenado.\n");
    } else {
        printf("O vetor não está ordenado.\n");
    }

    return 0;
}