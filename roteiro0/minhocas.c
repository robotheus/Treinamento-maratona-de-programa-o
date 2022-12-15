#include <stdio.h>

int main(){
    int n, m, soma = 0, somaaux;
    scanf("%d %d", &n, &m);

    int v[n][m];
    for(int i = 0; i < n; i++){
        somaaux = 0;
        for(int j = 0; j < m; j++){
            scanf("%d", &v[i][j]);
            somaaux += v[i][j];
        }
        if(somaaux > soma) soma = somaaux;
    }

    for(int k = 0; k < m; k++){
        somaaux = 0;
        for(int p = 0; p < n; p++){
            somaaux += v[p][k];
        }
        if(somaaux > soma) soma = somaaux;
    }

    printf("%d\n", soma);

    return 0;
}