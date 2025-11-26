void funcao(int x) {
	printf("%d\n", x);
	if(x >= 1)
		funcao(x-1);
	printf("%d\n", -x);
}
