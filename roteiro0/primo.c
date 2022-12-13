#include <stdio.h>

void main(){
    int n, x = 0;
    scanf("%d", &n);
    
    if(n == 2) printf("sim\n");
    if(n == 1) printf("nao\n");
    
    for(int i = 2; i < n; i++){
        if(n % i == 0) {
            printf("nao\n");
            x = 0;
            break;
        } else x = 1;
    }

    if(x == 1) printf("sim\n");
}