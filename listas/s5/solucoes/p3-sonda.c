#include<stdio.h>
#include<math.h>

/**
 * Calcula altura através de f(x, y) = sin(cos(y) + x) + cos(y + sin(x))
 * 
 * Entradas: Coordenadas x e y (pontos flutuantes)
 * Retorna: O resultado da função bidimensional (ponto flutuante)
 */
float altura(float x, float y) {
    float termo1 = sin(cos(y) + x);
    float termo2 = cos(y + sin(x));
    return termo1 + termo2;
}

/*
 * Recebe uma altura (ponto flutuante) e retorna:
 * 1 se ela é segura
 * 0 se ela é insegura
 */
int altura_segura(float h) {
    if ( (h > 2) || (h < 0) )
        return 0;
    else 
        return 1;
}

/* Verifica a segurança para pouso
 * Entradas: Coordenadas x e y (pontos flutuantes)
 * Retorna:
 * -2 para local inseguro,
 * -1 para pedir troca de coordenada, 
 * 0 para indicar um ponto relativamente seguro
 * 1 para indicar um ponto seguro 
 */
int verifica_ponto(float x, float y) {
    float h;
    h = altura(x, y);
    // verifica se o ponto principal de pouso é seguro
    if (altura_segura(h)) {
        int p1, p2, p3, p4;
        p1 = altura_segura(altura(x+0.2, y+0.2));
        p2 = altura_segura(altura(x-0.2, y-0.2));
        p3 = altura_segura(altura(x+0.2, y-0.2));
        p4 = altura_segura(altura(x-0.2, y+0.2));

        // verifica se todos os pontos em verde são seguros
        if (p1 && p2 && p3 && p4) {
            int soma;
            soma = altura_segura(altura(x+2, y)) + 
                altura_segura(altura(x-2, y)) + 
                altura_segura(altura(x, y-2)) +
                altura_segura(altura(x, y+2));   
            
            // conta quanto dos pontos vizinhos mais distantes (em azul) são seguros
            if (soma <= 1)
                return -2; // inseguro
            else if ((soma == 2) || (soma == 3))
                return 0; // relativamente seguro
            else
                return 1; // seguro
        } else 
            return -1; // algum dos pontos em verde (vizinhos próximos) é inseguro (trocar de coordenada)
    } else
        return -1; // pedir para trocar de coordenada
}

int main() {
    float x, y;
    int s;

    printf("Informe as coordenadas x e y separadas por um espaço: ");
    scanf("%f %f", &x, &y);

    s = verifica_ponto(x, y);

    if (s == -1)
        printf("troque de coordenada\n");
    else if (s == -2)
        printf("inseguro\n");
    else if (s == 0)
        printf("relativamente seguro\n");
    else
        printf("seguro\n");

    return 0;
}