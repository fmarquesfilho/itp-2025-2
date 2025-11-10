#include<stdio.h>
#include<math.h>
#include "ponto.h"

// colocando a definição do tipo registro no arquivo ponto.h
/* struct Ponto {
    int identificador;
    float x, y, z;
}; */

float distancia(struct Ponto p1, struct Ponto p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2) + pow(p2.z - p1.z, 2));
}

void printPonto(struct Ponto p) {
    printf("(%d: (%.2f, %.2f, %.2f))\n", p.identificador, p.x, p.y, p.z);
}

int main() {
    struct Ponto p1 = {0, 0, 1, 2};
    struct Ponto p2 = {1, 1, 0, 1};

    printPonto(p1);
    printPonto(p2);
    printf("A distância euclidiana é entre ambos os pontos é %.2f.\n", distancia(p1, p2));

    return 0;
}