#include <stdio.h>
#include "janela.h"
#include "primo.h"

int main() {
    int x;
    const int TAMANHO_JANELA = 7;
    
    Janela* janela = janela_criar(TAMANHO_JANELA);
    janela_inicializar(janela, 2);
    
    x = 2;
    do {
        if (janela_get(janela, 0) && janela_get(janela, 2) && janela_get(janela, 6)) {
            printf("(%d, %d, %d)\n", x, x+2, x+6);
        }
        
        x++;
        janela_deslizar(janela, primo(x+6));
        
    } while ( (x + TAMANHO_JANELA - 1) <= MAX );
    
    janela_destruir(janela);
    
    return 0;
}