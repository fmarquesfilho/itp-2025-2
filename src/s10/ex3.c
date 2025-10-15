#include<stdio.h>

int main() {
    char string[30];
    int cont = 0, tam = 0;

    char *p = string;
    gets(p);

    for ( ; *p != '\0'; p++, tam++) {
        if (*p == ' ')
            cont++;
    }

    if (tam != 0) {
        cont++;
    }
    
    printf("A frase contém %d palavras.\n", cont);

    return 0;
}