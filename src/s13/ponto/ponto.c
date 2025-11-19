#include "ponto.h"
#include<math.h>
#include<stdio.h>

float distancia(struct Ponto p1, struct Ponto p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2) + pow(p2.z - p1.z, 2));
}

void printPonto(struct Ponto p) {
    printf("(%d: (%.2f, %.2f, %.2f))\n", p.identificador, p.x, p.y, p.z);
}
