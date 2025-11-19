#include <stdlib.h>
#include "janela.h"
#include "primo.h"

struct Janela {
    int* valores;
    int tamanho;
};

Janela* janela_criar(int tamanho) {
    Janela* j = (Janela*)malloc(sizeof(Janela));
    j->tamanho = tamanho;
    j->valores = (int*)malloc(tamanho * sizeof(int));
    return j;
}

void janela_inicializar(Janela* j, int x_inicial) {
    for (int i = 0; i < j->tamanho; i++) {
        j->valores[i] = primo(x_inicial + i);
    }
}

int janela_get(Janela* j, int i) {
    return j->valores[i];
}

void janela_deslizar(Janela* j, int novo_valor) {
    for (int i = 1; i < j->tamanho; i++) {
        j->valores[i-1] = j->valores[i];
    }
    j->valores[j->tamanho - 1] = novo_valor;
}

void janela_destruir(Janela* j) {
    free(j->valores);
    free(j);
}