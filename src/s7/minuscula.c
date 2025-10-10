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

    printf("%s\n", frase);

    return 0;
}
