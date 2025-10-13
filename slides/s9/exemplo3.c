#include <stdio.h>

int main() {

	int m[5][5];
	int i, j;
	
	//leitura
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 5; j++) {
			scanf("%d", &m[i][j]);
		}
	}
	//escrita
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 5; j++) {
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
	return 0;
}
