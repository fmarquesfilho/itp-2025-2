#include<stdio.h>
#include<stdlib.h>

int main() {
    int i, n, x, *v, cont = 0;

    // lê n
    scanf("%d", &n);

    // aloca um vetor com espaço para n inteiros
    v = calloc(n, sizeof(int));
    
    // lê n inteiros
    for (i = 0; i < n; i++)
        scanf("%d", &v[i]);

    // lê x
    scanf("%d", &x);

    // contabiliza o número de ocorrências de x em v
    i = 0;
    while (i < n) {
        if (v[i] == x)
            cont++;
        i++;
    }

    // libera o espaço de memória
    free(v);

    // imprime o número de ocorrências de x em v
    printf("%d ocorre %d vezes na sequência.\n", x, cont);

    return 0;
}