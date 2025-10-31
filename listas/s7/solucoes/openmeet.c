#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char nome_busca[11];
    char entrada[1001];
    int i, l, j, presencas, total_dias;

    // lê entrada do usuário
    fgets(entrada, 1000, stdin);

    // tamanho da entrada
    l = strlen(entrada);

    // remove o caractere de nova linha, se presente
    if (entrada[l - 1] == '\n') {
        entrada[l - 1] = '\0';
        l--;
    }

    // atribui nome a ser buscado
    for (i = 0, j = 0; (i < l) && (j < 10) && (entrada[i] != ' '); i++, j++) {
        nome_busca[j] = entrada[i];
    }
    nome_busca[j] = '\0';

    // conta presenças para o nome buscado
    presencas = 0;
    total_dias = 0;
    i = i + 1;
    while (i < l) {
        // verifica se é data
        if ((entrada[i] >= '0') && (entrada[i] <= '9')) {
            total_dias++;
            // pula data
            while ((i < l) && (entrada[i] != ' ')) {
                i++;
            }
        } else if (entrada[i] == ' ') {
            // pula espaço
            i++;
            continue; // necessário? não é, mas deixa claro
        } else {
            // verifica nome se bate com a string de busca
            int encontrou = 1;
            for (j = 0; ((i + j) < l) && (nome_busca[j] != '\0') && (encontrou); j++) {
                if (entrada[i + j] != nome_busca[j]) {
                    encontrou = 0;
                }
            }

            // se encontrou o nome e é final da string ou próximo caractere é espaço, conta presença
            // (nome_busca[j] == '\0') é necessário? não é, mas deixa claro.
            if ( (nome_busca[j] == '\0') && ((i + j == l) || (entrada[i + j] == ' ')) && (encontrou)) {
                presencas++;
            } 

            // pula remanente do nome ou espaço (caso tenha encontrado o nome ou não)
            while ((i < l) && (entrada[i] != ' ')) {
                i++;
            }
        }
    }

    // imprime o número de faltas
    printf("%d\n", total_dias - presencas);

    return 0;
}
