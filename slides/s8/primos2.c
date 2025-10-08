#include <stdio.h>

int main() {

	int i, j;
	for(i = 1; i <= 17; i++) {
		cont = 0;
		for(j = 1; j <= i; j++) {
			if(i%j == 0) {
				cont++;
			}
		}
		if(cont == 2) {
			printf("%d ", i);
		}
	}

	return 0;
}
