//retorna a quantidade de dias do mes passado como parametro
//assuma ano nao bissexto
int numeroDiasNoMes(int mes);

//retorna a quantidade de dias entre duas datas
int diferencaDatas(Data d1, Data d2);

//retorna verdadeiro/falso se d existe ou nao como data
//exemplo, para a data 30/02/2018 deve retornar falso
int dataValida(Data d);

//retorna uma Tarefa com a data inicial (d1/m1/a1) e final (d2/m2/a2)
//de acordo com o passado como parametros
Tarefa criarTarefa(int d1, int m1, int a1, int d2, int m2, int a2);
