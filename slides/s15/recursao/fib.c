#include <stdio.h>

int fib(int n) {
	if(n == 1 || n == 2) {
		return 1;
	} else {
		return fib(n-1) + fib(n-2);
	}
}

int main() {

	int x;
	scanf("%d", &x);
	printf("%d\n", fib(x));

	return 0;
}
