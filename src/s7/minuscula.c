#include<stdio.h>
#include<string.h>

int main() {
    char frase[20];
    int n;

    printf("Digite uma frase:\n");

    gets(frase);

    n = strlen(frase);
    printf("A frase %s tem %d caracteres.\n", frase, n);

    for (int i = 0; i < n; i++) {
        if (frase[i] != ' ')
            frase[i] = frase[i] - 32;
    }

/*     printf("%c ", frase[4]); // M
    printf("%c ", frase[5]); // U
    printf("%c ", frase[6]); // N
    printf("%c ", frase[7]); // D
    printf("%c ", frase[8]); // O
    printf("\n"); */

    printf("%s\n", frase);

    return 0;
}
