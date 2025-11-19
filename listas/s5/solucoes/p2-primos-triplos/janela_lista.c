#include <stdlib.h>
#include "janela.h"
#include "primo.h"

typedef struct No {
    int valor;
    struct No* prox;
} No;

struct Janela {
    No* inicio;
    No* fim;
    int tamanho;
};

Janela* janela_criar(int tamanho) {
    Janela* j = (Janela*)malloc(sizeof(Janela));
    j->inicio = NULL;
    j->fim = NULL;
    j->tamanho = tamanho;
    return j;
}

void janela_inicializar(Janela* j, int x_inicial) {
    for (int i = 0; i < j->tamanho; i++) {
        No* novo = (No*)malloc(sizeof(No));
        novo->valor = primo(x_inicial + i);
        novo->prox = NULL;
        
        if (j->inicio == NULL) {
            j->inicio = novo;
            j->fim = novo;
        } else {
            j->fim->prox = novo;
            j->fim = novo;
        }
    }
}

int janela_get(Janela* j, int i) {
    No* atual = j->inicio;
    for (int k = 0; k < i; k++) {
        atual = atual->prox;
    }
    return atual->valor;
}

void janela_deslizar(Janela* j, int novo_valor) {
    No* primeiro = j->inicio;
    j->inicio = primeiro->prox;
    free(primeiro);
    
    No* novo = (No*)malloc(sizeof(No));
    novo->valor = novo_valor;
    novo->prox = NULL;
    j->fim->prox = novo;
    j->fim = novo;
}

void janela_destruir(Janela* j) {
    No* atual = j->inicio;
    while (atual != NULL) {
        No* temp = atual;
        atual = atual->prox;
        free(temp);
    }
    free(j);
}