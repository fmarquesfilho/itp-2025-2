#include<stdio.h>

int main(){
    int n, i;
    printf("Digite n: ");
    scanf("%d", &n);

    i = 2;
    printf("Pares: ");
    while (i <= n) {
        printf("%d ", i);
        i = i + 2;
    }
    printf("\n");

    i = 1;
    printf("Ímpares: ");
    while (i <= n) {
        printf("%d ", i);
        i = i + 2;
    }
    printf("\n");
}