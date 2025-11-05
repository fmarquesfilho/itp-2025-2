#include<stdio.h>

int primo(int n) {
    int eh_primo = 1;
    if (n == 1) {
        eh_primo = 0;
    } else {
        for (int i = 2; (i <= n/2) && (eh_primo); i++) {
            if ((n % i) == 0) {
                eh_primo = 0;
            }
        }
    }
    return eh_primo;
}

int main() {
    int x;
    
    for (x = 2; x < (50000-6); x++) {
        if (primo(x) && primo(x+2) && primo(x+6))
            printf("(%d, %d, %d)\n", x, x+2, x+6);
    }

    return 0;
}