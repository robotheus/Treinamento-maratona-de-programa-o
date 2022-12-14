#include <stdio.h>

int main(){
    int n, soma, instancia = 0;

    while(scanf("%d", &n) == 1){
        
        int v[n];

        for(int i = 0; i < n; i++){
            scanf("%d", &v[i]);
        }

        if(n == 1){
            printf("Instancia %d\n", instancia + 1);
            instancia++;
            printf("%d\n", v[0]);
            printf("\n");
            continue;
        }

        for(int j = 1; j < n; j++){
            soma = 0;
            for(int k = 0; k < j; k++){
                soma += v[k];
            }

            if(soma == v[j]){
                printf("Instancia %d\n", instancia + 1);
                instancia++;
                printf("%d\n", v[j]);
                printf("\n");
                break;
            } else if(j == n-1){
                printf("Instancia %d\n", instancia + 1);
                instancia++;
                printf("nao achei\n");
                printf("\n");
                break;
            }
        }
    }

    return 0;
}