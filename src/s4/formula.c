#include<stdio.h>

int main() {
    int n, res;

    printf("Digite n: ");
    scanf("%d", &n);

    res = n;
    while (res > 1) {
        printf("%d ", res);
        if ((res % 2) == 0) {
            // é par
            res = res / 2;
        } else {
            // é ímpar
            res = (3 * res) + 1;
        }
    }
    printf("1\n");
}