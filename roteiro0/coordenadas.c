#include <stdio.h>

typedef double Coordenada;

typedef struct {
    Coordenada x, y;
} Ponto;

void main(){
    Ponto ponto;
    scanf("%lf %lf", &ponto.x, &ponto.y);

    if(ponto.x == 0.0 && ponto.y == 0.0) printf("Origem\n");
    else if(ponto.x == 0.0) printf("Eixo X\n");
    else if(ponto.y == 0.0) printf("Eixo Y\n");
    else if(ponto.x > 0.0 && ponto.y > 0.0) printf("Q1\n");
    else if(ponto.x > 0.0 && ponto.y < 0.0) printf("Q4\n");
    else if(ponto.x < 0.0 && ponto.y < 0.0) printf("Q3\n");
    else printf("Q2\n");
}