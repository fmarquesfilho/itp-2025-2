#ifndef JANELA_H
#define JANELA_H

typedef struct Janela Janela;

Janela* janela_criar(int tamanho);
void janela_inicializar(Janela* j, int x_inicial);
int janela_get(Janela* j, int i);
void janela_deslizar(Janela* j, int novo_valor);
void janela_destruir(Janela* j);

#endif