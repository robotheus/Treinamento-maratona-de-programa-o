#include <stdio.h>
#include <stdlib.h>

void main(){
    int n = 1, teste = 0, a, b;
    scanf("%d", &n);

    while(n){
        char *name1, *name2;
        name1 = malloc(10 * sizeof(char));
        name2 = malloc(10 * sizeof(char));
        
        scanf("%d", &n);
        scanf("%s", name1);
        scanf("%s", name2);

        int escolhas[n];

        for(int i = 0; i < n; i++){
            scanf("%d %d", &a, &b);
            escolhas[i] = a + b;
        }

        printf("Teste %d\n", teste + 1);
        teste++;
        
        for(int j = 0; j < n; j++){
            if(escolhas[j] % 2 == 0) printf("%s\n", name1);
            else printf("%s\n", name2);
        }

        printf("\n");
        free(name1); free(name2);
        scanf("%d", &n);
    }
}