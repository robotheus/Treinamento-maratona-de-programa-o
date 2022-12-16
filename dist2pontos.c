#include <stdio.h>
#include <math.h>

typedef struct _ponto {
    double x, y;
} ponto;

int main() {
    double distancia;
    ponto p1, p2;

    scanf("%lf %lf", &p1.x, &p1.y);
    scanf("%lf %lf", &p2.x, &p2.y);
    
    distancia = sqrt((pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2)));
   
   printf("%.4lf\n", distancia);
 
return 0;
}