#include <stdio.h>

int fatorial(int n) {
	int res = 1, i;
	for(i = 1; i <= n; i++)
		res *= i;
	return res;
}

int main() {

	int x;
	scanf("%d", &x);
	printf("%d! = %d\n", x, fatorial(x));
	return 0;
}
