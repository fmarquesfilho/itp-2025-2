#include <stdlib.h>
#include "janela.h"
#include "primo.h"

typedef struct No {
    int valor;
    struct No* prox;
} No;

struct Janela {
    No* inicio; // guarda ponteiro para o primeiro nó (x)
    No* meio; // guarda ponteiro para o nó do meio (x+2)
    No* fim; // guarda ponteiro para o último nó (x+6)
    int tamanho;
};

Janela* janela_criar(int tamanho) {
    Janela* j = (Janela*)malloc(sizeof(Janela));
    j->inicio = NULL;
    j->meio = NULL;
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

        // Atualiza o ponteiro do meio, caso tamanho seja 7
        if ( (i == 2) && (j->tamanho == 7) ) {
            j->meio = novo;
        }
    }    
}

// Retorna o valor do i-ésimo elemento da janela
// i = 0 retorna x, i = 2 retorna x+2, i = 6 retorna x+6 através dos ponteiros
// Caso o tamanho seja diferente de 7, percorre a lista normalmente
int janela_get(Janela* j, int i) {
    if (i < 0 || i >= j->tamanho) {
        return 0; // índice inválido
    }

    // caso tamanho seja 7, retornamos os valores conforme os ponteiros
    // inicio, meio e fim para otimizar o acesso
    if (j->tamanho == 7) {
        if (i == 0) return (j->inicio != NULL) ? j->inicio->valor : 0;
        if (i == 2) return (j->meio != NULL) ? j->meio->valor : 0;
        if (i == 6) return (j->fim != NULL) ? j->fim->valor : 0;
    } else {
        // para outros tamanhos, percorremos a lista
        No* atual = j->inicio;
        for (int k = 0; k < i; k++) {
            atual = atual->prox;
        }
        return atual->valor;
    }
    return 0; // nunca deve chegar aqui, mas evita warnings
}

void janela_deslizar(Janela* j, int novo_valor) {
    No* primeiro = j->inicio;
    j->inicio = primeiro->prox;
    // vamos reaproveitar a memória do nó removido
    //free(primeiro);

    if (j->meio->prox != NULL) {
        j->meio = j->meio->prox;
    }
    
    //No* novo = (No*)malloc(sizeof(No));
    No* novo = primeiro; // reaproveita o nó removido
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