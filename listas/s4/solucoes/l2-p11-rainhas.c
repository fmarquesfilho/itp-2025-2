#include <stdio.h>
#include <stdlib.h>

// Função que verifica se duas rainhas se atacam
int atacam(int l1, int c1, int l2, int c2) {
    // Mesma coluna
    if (c1 == c2)
        return 1;
    
    // Mesma diagonal (diferença absoluta entre linhas == diferença absoluta entre colunas)
    if (abs(l1 - l2) == abs(c1 - c2))
        return 1;
    
    return 0;
}

// Função que verifica se uma configuração é válida
int configuracao_valida(int c1, int c2, int c3, int c4) {
    // As linhas são fixas: 0, 1, 2, 3
    // Precisamos verificar todos os pares de rainhas
    
    // Rainha 1 (linha 0, coluna c1) vs Rainha 2 (linha 1, coluna c2)
    if (atacam(0, c1, 1, c2))
        return 0;
    
    // Rainha 1 vs Rainha 3 (linha 2, coluna c3)
    if (atacam(0, c1, 2, c3))
        return 0;
    
    // Rainha 1 vs Rainha 4 (linha 3, coluna c4)
    if (atacam(0, c1, 3, c4))
        return 0;
    
    // Rainha 2 vs Rainha 3
    if (atacam(1, c2, 2, c3))
        return 0;
    
    // Rainha 2 vs Rainha 4
    if (atacam(1, c2, 3, c4))
        return 0;
    
    // Rainha 3 vs Rainha 4
    if (atacam(2, c3, 3, c4))
        return 0;
    
    return 1;
}

// Função que imprime o tabuleiro
void imprime_tabuleiro(int c1, int c2, int c3, int c4) {
    int i, j;
    int colunas[4] = {c1, c2, c3, c4};
    
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (j == colunas[i])
                printf("R ");
            else
                printf(". ");
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int c1, c2, c3, c4;
    int contador = 0;
    
    printf("Solucoes para o problema das 4 rainhas:\n\n");
    
    // Cada rainha em uma linha diferente
    // Rainha 1 na linha 0, variamos a coluna
    for (c1 = 0; c1 < 4; c1++) {
        // Rainha 2 na linha 1
        for (c2 = 0; c2 < 4; c2++) {
            // Rainha 3 na linha 2
            for (c3 = 0; c3 < 4; c3++) {
                // Rainha 4 na linha 3
                for (c4 = 0; c4 < 4; c4++) {
                    // Verifica se esta configuração é válida
                    if (configuracao_valida(c1, c2, c3, c4)) {
                        contador++;
                        printf("Solucao %d:\n", contador);
                        imprime_tabuleiro(c1, c2, c3, c4);
                    }
                }
            }
        }
    }
    
    printf("Total de solucoes encontradas: %d\n", contador);
    
    return 0;
}
