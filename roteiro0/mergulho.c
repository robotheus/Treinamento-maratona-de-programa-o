#include <stdio.h>

int nao_devolveu(int j, int v[], int r){
    for(int k = 0; k < r; k++){
        if(v[k] == j) return 0;
    }

    return 1;
}

int main(){
    int n, r;
    
    while(scanf("%d %d", &n, &r) != EOF){
        int v[r];

        for(int i = 0; i < r; i++){
            scanf("%d", &v[i]);
        }

        if(n == r) {
            printf("*\n");
            continue;;
        }

        for(int j = 1; j <= n; j++){
            if(nao_devolveu(j, v, r)) {
                printf("%d ", j);
            }
        }
        
        printf("\n");
    }

    return 0;
}