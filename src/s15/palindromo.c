#include<stdio.h>
#include<string.h>

int palindromo(char *s, int inicio, int fim) {
    if (inicio >= fim) return 1;
    if (s[inicio] != s[fim]) return 0;
    return palindromo(s, inicio + 1, fim - 1);
}

int main() {
    char palavra[50];

    printf("Digite uma palavra para verificar se é ou não palíndromo: ");
    scanf("%s", palavra);

    if (palindromo(palavra, 0, strlen(palavra) - 1))
        printf("%s é palíndromo.\n", palavra);
    else
        printf("%s não é palíndromo.\n", palavra);

    return 0;
}