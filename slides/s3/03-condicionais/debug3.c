#include <stdio.h>

int main() {
	
	float a, b, c, delta;

	printf("Digite os coeficientes de ax2 + bx + c = 0\n");
	scanf("%f %f %f", &a, &b, &c);

	delta = b*b - 4*a*b;
	printf("delta = %d\n", delta); //msg para debug

	printf("Uma raiz eh: %f\n", (-b+sqrt(delta))/(2*a));

	return 0;
}
