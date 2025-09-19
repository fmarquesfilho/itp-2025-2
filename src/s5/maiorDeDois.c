#include<stdio.h>

int maiorDeDois(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int x, y;

    printf("Digite dois números inteiros seperados por espaço:\n");
    scanf("%d %d", &x, &y);

    if (x == y) {
        printf("Os números são iguais.\n");
    } else {
        if (maiorDeDois(x, y) == x) {
            printf("%d é maior que %d\n", x, y);
        } else {
            printf("%d é maior que %d\n", y, x);
        }
    }

    return 0;
}