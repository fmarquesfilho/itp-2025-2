#include<stdio.h>

int primo(int n) {
    int eh_primo = 1;
    if (n == 1) {
        eh_primo = 0;
    } else {
        for (int i = 2; (i <= n/2) && (eh_primo); i++) {
            if ((n % i) == 0) {
                eh_primo = 0;
            }
        }
    }
    return eh_primo;
}

int main() {
    int x, i;
    int v[7];

    // inicializa as 7 primeiras posições do vetor
    // 7 pois são o número de elementos no intervalo [x, x+6]
    for (i = 0; i < 7; i++) {
        v[i] = primo(2 + i);
    }

    for (x = 1; x < 50000-6; x++) {
        if (v[0] && v[2] && v[6])
            printf("(%d, %d, %d)\n", x, x+2, x+6);
        for (i = 1; i < 7; i++) {
            v[i-1] = v[i];
        }
        v[6] = primo(x+7);
    }

    return 0;
}