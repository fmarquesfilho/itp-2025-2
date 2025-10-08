@\textbf{\color{blue}for(i = 0; i < 16; i++) \{ }@ //for i
	indiceMenor = i;
	@\textbf{\color{deepgreen}for(j = i+1; j < 17; j++) \{ }@	//for j
		if(v[j] < v[indiceMenor]) {
			indiceMenor = j;
		}
	}
	aux = v[i];
	v[i] = v[indiceMenor];
	v[indiceMenor] = aux;
}
