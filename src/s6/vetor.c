#include<stdio.h>

void imprimeVetor(int *v, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main() {
    int v[5] = {1, 4, 5, 7, 9};

    imprimeVetor(v, 5); // ANTES
    v[1] = 3;
    imprimeVetor(v, 5); // DEPOIS

    return 0;
}