#include<stdio.h>

int main() {
    int a = 2, b = 3, *p1, *p2, *p3;

    p1 = NULL;
    p2 = &a;
    p3 = &b;

    printf("%p\n", p1);

    // Escreva na tela duas vezes o endereço de a: usando o operador
    // & e usando o valor do ponteiro
    printf("%p\n", &a);
    printf("%p\n", p2);

    // Escreva na tela duas vezes o endereço de b: usando o operador
    // & e usando o valor do ponteiro
    printf("%p\n", &b);
    printf("%p\n", p3);

    return 0;
}