#include<stdio.h>
#include<stdlib.h>

int* somaVetores(int *a, int n1, int *b, int n2) {
    int *res;

    res = malloc(n1 * sizeof(int));

    for (int i = 0; i < n1; i++)
        res[i] = a[i] + b[i];
        
    return res;
}

int main() {
    int *u, *v, *vetor_soma, n1, n2, i;

    // ler do usuário um inteiro n1, e um inteiro n2
    scanf("%d %d", &n1, &n2);

    // verificar se n1 != n2
    if (n1 != n2)
        printf("dimensões incompatíveis");
    else {
        // alocar dinamicamente os vetores
        u = malloc(n1 * sizeof(int));
        v = malloc(n2 * sizeof(int));

        // lê vetor u
        for (i = 0; i < (n1 - 1); i++)
            scanf("%d ", &u[i]);
        scanf("%d", &u[n1-1]);

        // lê vetor v
        for (i = 0; i < (n1 - 1); i++)
            scanf("%d ", &v[i]);
        scanf("%d", &v[n2-1]);

        vetor_soma = somaVetores(u, n1, v, n2);

        // imprime vetor resultante da soma
        for (i = 0; i < n1; i++)
            printf("%d ", vetor_soma[i]);
        printf("\n");
    }

    return 0;
}