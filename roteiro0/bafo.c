#include <stdio.h>

int main(){
    int r, x, y, beto = 0, aldo = 0, teste = 0;

    while(1){
        scanf("%d", &r);
        if(r == 0) break;

        aldo = 0; beto = 0;
        for(int i = 0; i < r; i++){
            scanf("%d %d", &x, &y);
            aldo += x;
            beto += y;
        }
        
        printf("Teste %d\n", teste+1);
        teste++;

        if(beto > aldo) printf("Beto\n");
        else if(beto < aldo) printf("Aldo\n");

        printf("\n");
    }

    return 0;
}