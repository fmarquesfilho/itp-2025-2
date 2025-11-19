#include<stdio.h>
#include "primo.h"

int main() {
    int x, i;
    // vetor que vai armazenar de x a x+6 se são primos ou não
    int v[7];

    // inicializa as 7 primeiras posições do vetor, 
    // correspondentes a x até x+6 (com x iniciando em 2), ou seja
    // [primo(2), primo(3), primo(4), primo(5), primo(6), primo(7), primo(8)]
    // 7 pois são o número de elementos no intervalo [x, x+6]
    for (i = 0; i < 7; i++) {
        v[i] = primo(2 + i); // começa em 2 a verificar se é primo
    }

    // percorre valores de x de 2 até 49993 (último x que permite x+6 <= 50000)
    x = 2;
    do {
        if (v[0] && v[2] && v[6])
            printf("(%d, %d, %d)\n", x, x+2, x+6);
        // "desloca" os valores no vetor para a esquerda
        // v[0] passa a ter o valor de v[1], v[1] passa a ter o valor de v[2], ...
        for (i = 1; i < 7; i++) {
            v[i-1] = v[i];
        }
        x++; // incrementa x
        // calcula se o novo valor (x+6) é primo e armazena em v[6]
        v[6] = primo(x+6);
    } while (x < (50000 - 6)); // último x que permite x+6 <= 50000

    return 0;
}