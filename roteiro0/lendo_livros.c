#include <stdio.h>

void main(){
    int q, d, p, y;
    double x;

    while(1){
        scanf("%d", &q);
        if(q == 0) break;

        scanf("%d %d", &d, &p);
        
        x = (double) (d * p) / (p - q);
        y = q * x;

        if(y > 1) printf("%d paginas\n", y);
        else printf("%d pagina\n", y);
    }
}