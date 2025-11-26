int buscaBinaria(int inicio, int fim, int *v, int ele) {
	int meio;

	if(inicio > fim)
		return -1;

	meio = (inicio+fim)/2;
	if(v[meio] == ele)
		return meio;
	else if(v[meio] > ele)
		return buscaBinaria(inicio, meio-1, v, ele);
	else
		return buscaBinaria(meio+1, fim, v, ele);
}
