#include<stdio.h>

int main() {
    int m[5][5], i, j;

    // preenchendo a matriz
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i == j) 
                m[i][j] = 1;
            else if (i > j)
                m[i][j] = 0;
            else 
                m[i][j] = 1;
        }
    }

    // imprimindo a matriz
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}