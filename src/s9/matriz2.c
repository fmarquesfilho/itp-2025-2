#include<stdio.h>

int main() {
    int m[5][5], i, j;

    // preenchendo a matriz
    for (i = 0; i < 5; i++) 
        for (j = 0; j < 5; j++)
            if (i == 0)
                m[0][j] = j + 1;
            else if (j == 4)
                m[i][4] = m[i][3];
            else
                m[i][j] = m[i-1][j] + m[i-1][j+1];

    // imprimindo a matriz
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%2d ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}