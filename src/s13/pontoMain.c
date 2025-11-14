#include<stdio.h>
#include<math.h>
#include "ponto.h"

int main() {
    struct Ponto p1 = {0, 0, 1, 2};
    struct Ponto p2 = {1, 1, 0, 1};

    printPonto(p1);
    printPonto(p2);
    printf("A distância euclidiana é entre ambos os pontos é %.2f.\n", distancia(p1, p2));

    return 0;
}