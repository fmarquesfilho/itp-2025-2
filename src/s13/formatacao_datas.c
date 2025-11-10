#include<stdio.h>

struct Data {
    int dia, mes, ano;
};

struct Tarefa {
    struct Data dataInicial;
    struct Data dataFinal;
};

int main() {
    struct Data d1 = {6, 5, 2018};
    struct Data d2;
    struct Data dataFinal = {1, 4, 2018};
    struct Tarefa lista1;

    d2.dia = 31;
    d2.mes = 12;
    d2.ano = 2018;

    lista1.dataInicial.dia = 18;
    lista1.dataInicial.mes = 2;
    lista1.dataInicial.ano = 2018;

    lista1.dataFinal = dataFinal;
    lista1.dataInicial.dia = 19;
    lista1.dataFinal.mes = 3;

    printf("%4d/%02d/%02d\n", d1.ano, d1.mes, d1.dia);
    printf("%4d/%02d/%02d\n", d2.ano, d2.mes, d2.dia);
    printf("data inicial: %4d/%02d/%02d; data final: %4d/%02d/%02d\n", 
        lista1.dataInicial.ano,
        lista1.dataInicial.mes,
        lista1.dataInicial.dia, 
        lista1.dataFinal.ano,
        lista1.dataFinal.mes,
        lista1.dataFinal.dia);

    return 0;
}