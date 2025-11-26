#include <stdio.h>

int fatorial(int n) {
	if(n == 0) {
		return 1;
	} else {
		return n*fatorial(n-1);
	}
}

int main() {

	int x;
	scanf("%d", &x);
	printf("%d! = %d\n", x, fatorial(x));
	return 0;
}
