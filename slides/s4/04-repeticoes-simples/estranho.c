#include <stdio.h>

int main() {

	int a, b;

	scanf("%d", &a);
	//aqui eh melhor usar um do/while 
	//como fizemos anteriormente
	for(b = 0; b == 0;) {
		scanf("%d", &b);
	}
	printf("%f\n", ((float)a/b));

	return 0;
}
