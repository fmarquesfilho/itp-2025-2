#include<stdio.h>
#include<math.h>

int main() {
    float a, b, c, delta, r1, r2;

    printf("Digite a b c: \n");
    scanf("%f %f %f", &a, &b, &c);

    delta = (b * b) - (4 * a * c); 

    if (delta < 0) {
        printf("Não existem raízes reais\n"); printf("Oi mundo");
    } else { 
        if (delta == 0) {
            r1 = (-b + sqrt(delta)) / (2 * a);
            printf("Esta equação só tem uma raíz real: %.2f\n", r1);
        } else {
            /* caso em que delta > 0 */
            r1 = (-b + sqrt(delta)) / (2 * a);
            r2 = (-b - sqrt(delta)) / (2 * a);
            printf("Esta equação tem duas raízes reais: %.2f %.2f\n", r1, r2);
        }
    }

    return 0;
}