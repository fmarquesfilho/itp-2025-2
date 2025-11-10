struct Aluno {
	char nome[100];
	float n1, n2, n3;
	int matricula;
};

struct Turma {
	struct Aluno alunos[45];
	int codigo;
};

int main() {
	struct Turma t1;
	t1.alunos[0].matricula = 200300000;
	t1.alunos[0].n1 = 3.0;
	t1.alunos[0].n2 = 4.5;
	t1.alunos[0].n3 = 7.0;
}

