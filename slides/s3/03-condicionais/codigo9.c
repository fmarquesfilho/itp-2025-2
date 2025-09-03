scanf("%f %f %f", &n1, &n2, &n3);
mediaParcial = (4*n1 + 5*n2 + 6*n3)/15
if(mediaParcial < 3)
	printf("Reprovado\n");
else {
	if(mediaParcial >= 7)
		printf("Aprovado\n");
	else {
		scanf("%f", &n4);
		mediaFinal = (mediaParcial + n4)/2;
		if(mediaFinal >= 5)
			printf("Aprovado\n");
		else
			printf("Reprovado\n");
	}
}
