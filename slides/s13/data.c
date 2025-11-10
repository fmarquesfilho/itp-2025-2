#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Data {
	int dia, mes, ano;
};
typedef struct Data Data;

struct Tarefa {
	Data dataInicial, dataFinal;
};
typedef struct Tarefa Tarefa;

//retorna se as duas datas sao iguais ou nao
int datasIguais(Data d1, Data d2) {
	return d1.dia == d2.dia && d1.mes == d2.mes && d1.ano == d2.ano;
}

//escreve a data no formato AAAA/MM/DD
void printData(Data d) {
	printf("%d/%02d/%02d\n", d.ano, d.mes, d.dia);
}

//retorna a quantidade de dias do mes passado como parametro
//assuma ano nao bissexto (ou seja, fevereiro vai ate 28)
int numeroDiasNoMes(int mes) {

}

//retorna a quantidade de dias entre duas datas
//use numeroDiasNoMes para facilitar os cálculos
int diferencaDatas(Data d1, Data d2) {

}

//retorna verdadeiro/falso se d existe ou nao como data
//exemplo, para a data 30/02/2018 deve retornar falso
int dataValida(Data d) {

}

//funcao main
int main() {

	//exercicio 1: criar uma tarefa lista1 que vai de 18/2/2018 ate 1/4/2018
	//corrija o dia inicial para 19
	//corrija o mes final para 3
	//escreva na tela as duas datas da tarefa
	Tarefa lista1 = {{18, 2, 2018},{1, 4, 2018}};
	lista1.dataInicial.dia = 19;
	lista1.dataFinal.mes = 3;

	printData(lista1.dataInicial);
	printData(lista1.dataFinal);

	//exercicio 2: criar uma tarefa lista2 cujas datas iniciais e finais sao
	//digitadas pelo usuario
	//se pelo menos uma das datas for invalida, solicite ao usuario uma nova data
	//escreva na tela as duas datas da tarefa
	//escreva na tela a diferença de dias usando a função diferencaDatas

	return 0;
}

