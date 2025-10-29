#include<stdio.h>
#include<stdlib.h>

int* alocaVetor(int n) {
    return calloc(n, sizeof(int));
}

int* somaVetores(int *a, int n1, int *b, int n2) {
    int *res, i;

    if (n1 > n2)
        res = alocaVetor(n1);
    else
        res = alocaVetor(n2);

    // soma dos elementos até o final do menor vetor
    for (i = 0; (i < n1) && (i < n2); i++)
        res[i] = a[i] + b[i];

    // cópia dos elementos que não puderam ser somados
    if (n1 > n2) {
        for (i = n2; i < n1; i++)
            res[i] = a[i];
    } else if (n2 > n1) {
        for (i = n1; i < n2; i++)
            res[i] = b[i];
    }
        
    return res;
}

int main() {
    int *u, *v, *vetor_soma, n1, n2, i;

    // ler do usuário um inteiro n1, e um inteiro n2
    scanf("%d %d", &n1, &n2);

    // alocar dinamicamente os vetores
    u = alocaVetor(n1);
    v = alocaVetor(n2);

    // lê vetor u
    if (n1 > 0) {
        for (i = 0; i < (n1 - 1); i++)
            scanf("%d ", &u[i]);
        scanf("%d", &u[n1-1]);
    }

    // lê vetor v
    if (n2 > 0) {
        for (i = 0; i < (n2 - 1); i++)
            scanf("%d ", &v[i]);
        scanf("%d", &v[n2-1]);
    }

    vetor_soma = somaVetores(u, n1, v, n2);

    // imprime vetor resultante da soma
    for (i = 0; (i < n1) || (i < n2); i++)
        printf("%d ", vetor_soma[i]);
    printf("\n");

    return 0;
}
