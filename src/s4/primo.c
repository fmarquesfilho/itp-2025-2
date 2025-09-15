#include<stdio.h>

int main() {
    // declarações
    int n, i, eh_primo;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    if (n != 1) {
        // assume que o número é primo
        for (i = 2, eh_primo = 1; (i < n) && (eh_primo); i++) {
            if ((n % i) == 0) {
                eh_primo = 0;
            }
        }
    } else {
        // caso de n == 1
        eh_primo = 0;
    }

    if (eh_primo) {
        printf("%d é primo.\n", n);
    } else {
        printf("%d não primo.\n", n);
    }

    return 0;
}