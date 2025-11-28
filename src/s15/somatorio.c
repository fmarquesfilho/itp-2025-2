#include<stdio.h>

int somatorio(int n) {
    if (n == 1)
        return 1;
    else 
        return n + somatorio(n - 1);
}

int main() {
    int n;

    printf("Digite n para o cálculo do somatório: \n");
    scanf("%d", &n);

    printf("O somatório de %d é %d.\n", n, somatorio(n));

    return 0;
}