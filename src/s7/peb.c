#include<stdio.h>
#include<string.h>

int main() {
    char frase[20];

    printf("Digite uma frase:\n");

    gets(frase);

    for(int i = 0; i < strlen(frase); i++) {
        if (frase[i] == 'n') {
            if ((frase[i+1] != '\0') && (frase[i+1] == 'p' || frase[i+1] == 'b')) {
                frase[i] = 'm';
            }
        }
    }

    printf("%s\n", frase);

    return 0;
}