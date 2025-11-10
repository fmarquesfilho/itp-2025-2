#include <stdio.h>
struct Aluno {
	char nome[100];
	float n1, n2, n3;
	int matricula;
};

int main() {

	struct Aluno *ptr;
	struct Aluno a2 = {"Rafael", 5, 6, 7, 201212345};
	ptr = &a2;
	printf("%s\n", ptr->nome);

	return 0;
}
