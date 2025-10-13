void f(int *x) {
	*x = *x - 1;
}

int main() {
	int k;
	k = 3;

	printf("k = %d\n", k);
	f(&k);
	printf("k = %d\n", k);

	return 0;
}
