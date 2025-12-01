FILE *arq;
arq = fopen("teste.txt", "w");
if(arq == NULL) {
	printf("Nao foi possivel abrir o arquivo\n");
} else {
	//... processa o arquivo
}
fclose(arq);
