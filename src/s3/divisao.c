#include<stdio.h>

int main() {
    float a, r;
    int b;

    scanf("%f %d", &a, &b);

    if (b != 0) {
        r = a / b;
        printf("Resultado: %f\n", r);
    } else {
        printf("O valor de b não pode ser igual a zero\n");
    }
}