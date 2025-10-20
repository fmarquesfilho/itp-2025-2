#include<stdio.h>

int main() {
    int a, b, i, j, k, eh_primo;
    printf("Digite o valor inicial do intervalo: ");
    scanf("%d", &a);
    printf("Digite o valor final do intervalo: ");
    scanf("%d", &b);

    // percorre todos os inteiros do intervalo [a, b], que contém  a - b + 1 elementos 
    for (i = a; i <= b; i++) {
        // para cada elemento k do intervalo, imprima se k é primo ou não
        k = i;
        if (k == 1) // caso especial para tratar o número 1
            eh_primo = 0;
        else {
            // caso em que k > 1
            eh_primo = 1; // assumo que é primo
            for (j = 2; (j <= (k/2)) && (eh_primo); j++) {
                if ((k % j) == 0)
                    eh_primo = 0; // achei o divisor, concluo que não é primo
            }
        }

        if (eh_primo)
            printf("%d é primo.\n", k);
        else
            printf("%d não é primo.\n", k);
    }

    return 0;
}