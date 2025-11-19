#include "primo.h"

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