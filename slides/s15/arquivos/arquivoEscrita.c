FILE *arq;
arq = fopen("teste.txt", "w");
fprintf(arq, "%d %s", numero, texto);
fclose(arq);
