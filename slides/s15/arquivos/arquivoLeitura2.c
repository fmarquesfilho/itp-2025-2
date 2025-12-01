FILE *arq;
arq = fopen("teste.txt", "w");
while(fscanf(arq, "%d %d", &numero1, &numero2) != EOF) {
	//... processa o par de numeros
}
fclose(arq);
