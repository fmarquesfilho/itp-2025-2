#include<stdio.h>
#include<stdlib.h>

int main() {
    int *v;

    v = malloc(5 * sizeof(int));

    v[0] = 1;
    v[1] = 3;
    v[2] = 5;
    v[3] = 7;
    v[4] = 9;

    for (int i = 0; i < 5; i++) {
        printf("%d ", v[i]);
    }

    printf("\n");

    return 0;
}