#include <stdio.h>

int main() {

	float euro = 4.075, dolar = 3.305, real = 1.0;
	float *moedaPtr = &euro;

	printf("10 reais em euros: %f\n", 10**moedaPtr);

	return 0;
}

