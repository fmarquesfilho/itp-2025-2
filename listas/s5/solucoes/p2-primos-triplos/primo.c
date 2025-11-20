#include "primo.h"
#include <math.h>

int primo(int n) {
    int eh_primo = 1, i;
    if (n == 1) {
        eh_primo = 0;
    } else {
        int sqrt_n = (int)sqrt((float)n);
        for (i = 2; (i <= sqrt_n) && eh_primo; i++) {
            if ((n % i) == 0) {
                eh_primo = 0;
            }
        }
    }
    return eh_primo;
}