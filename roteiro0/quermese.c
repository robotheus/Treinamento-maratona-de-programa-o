#include <stdio.h>

int main(){
    int n, teste = 0;

    do{
        scanf("%d", &n);
        int v[n];

        for(int i = 0; i < n; i++){
            scanf("%d", &v[i]);
        }

        for(int j = 0; j < n; j++){
            if(v[j] == j+1){
                printf("Teste %d\n", teste + 1);
                teste++;
                printf("%d\n", j+1);
                printf("\n");
                break;
            }
        }
    } while(n != 0);
    
    return 0;
}