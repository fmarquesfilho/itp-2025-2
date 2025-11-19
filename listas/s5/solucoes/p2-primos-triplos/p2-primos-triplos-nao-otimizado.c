#include<stdio.h>
#include "primo.h"

int main() {
    int x;
    
    // mais simples, porém menos eficiente. por quê?
    for (x = 2; x < (50000-6); x++) {
        if (primo(x) && primo(x+2) && primo(x+6))
            printf("(%d, %d, %d)\n", x, x+2, x+6);
    }

    return 0;
}
