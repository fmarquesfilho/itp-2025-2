@\textbf{\color{blue}for(i = 1; i <= 17; i++) \{ }@	
	cont = 0;
	@\textbf{\color{deepgreen}for(j = 1; j <= i; j++) \{ }@	
		if(i%j == 0) {
			cont++;
		}
	}
	if(cont == 2) {
		printf("%d ", i);
	}
}
