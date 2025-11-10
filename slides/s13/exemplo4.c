struct Aluno {
	char nome[100];
	float n1, n2, n3;
	int matricula;
};

int main() {

	struct Aluno a1;
	struct Aluno a2 = {"Rafael", 5, 6, 7, 201212345};
	a2.n1 = 5.5;
	a2.n2 = 10.0;

	return 0;
}
