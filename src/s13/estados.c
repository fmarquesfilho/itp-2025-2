#include<stdio.h>

typedef enum {
    INICIAL,
    EXECUTANDO,
    PAUSADO,
    FINALIZADO
} status;

struct RegProcesso {
    int id;
    status estado;
};

typedef struct RegProcesso Processo;

void imprimeProcesso(Processo p) {
    switch (p.estado) {
        case INICIAL:
            printf("O estado do processo %d é INICIAL.\n", p.id);
            break;
        case EXECUTANDO:
            printf("O estado do processo %d é EXECUTANDO.\n", p.id);
            break;
        case PAUSADO:
            printf("O estado do processo %d é PAUSADO.\n", p.id);
            break;
        case FINALIZADO:
            printf("O estado do processo %d é FINALIZADO.\n", p.id);
            break;
        default:
            printf("O estado do processo %d não pode ser determinado.\n", p.id);
    }
}

int main () {
    Processo proc = {2, FINALIZADO};

    imprimeProcesso(proc);

    return 0;
}
