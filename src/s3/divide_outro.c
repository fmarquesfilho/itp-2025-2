#include<stdio.h>

int main() {
    int a, b, resto, divide;

    // assumir que nenhum número divide o outro
    divide = 0; // FALSO

    scanf("%d %d", &a, &b);

    if (a >= b) {
        resto = a % b;
        if (resto == 0) {
            divide = 1; // VERDADEIRO
        }
    } 
    
    if (b >= a) {
        resto = b % a;
        if (resto == 0) {
            divide = 1; // VERDADEIRO
        }
    }

    if (!divide) {
        printf("Nenhum dos números divide o outro.");
    } else {
        printf("Um dos números divide o outro.");
    }

}