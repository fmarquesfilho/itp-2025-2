#include <stdio.h>

int main() {

	//vetor com 17 numeros
	int v[] = {3, 8, 4, ..., 10};
	int i, indiceMenor, aux;

	for(i = 0; i < 16; i++) {
		indiceMenor = i;
		for(j = i+1; j < 17; j++) {
			if(v[j] < v[indiceMenor]) {
				indiceMenor = j;
			}
		}
		aux = v[i];
		v[i] = v[indiceMenor];
		v[indiceMenor] = aux;
	}

	return 0;
}
