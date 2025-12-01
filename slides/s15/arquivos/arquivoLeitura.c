FILE *arq;
arq = fopen("teste.txt", "w");
fscanf(arq, "%d %d", &numero1, &numero2);
fclose(arq);
