struct Aluno {
	char nome[100];
	float n1, n2, n3;
	int matricula;
};

typedef struct Aluno TipoAluno;

int main() {

	//nao precisa mais escrever struct Aluno!
	TipoAluno a1 = {"Rafael", 5, 6, 7, 201212345};

	return 0;
}
