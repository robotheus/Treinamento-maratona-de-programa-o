#include <stdio.h>

void main(){
    int v[100], maior, posi;

    for(int i = 0; i < 100; i++){
        scanf("%d", &v[i]);
    }

    maior = v[0];
    for(int j = 1; j < 100; j++){
        if(maior < v[j]){
            maior = v[j];
            posi = j;
        }
    }

    printf("%d\n%d\n", maior, posi+1);
}