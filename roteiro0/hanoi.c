#include <stdio.h>
//T(1) = 1, T(2) = 2, T(n) = 2*T(n - 1) + 1, equacao deduzida 

int hanoi(int n){
    if(n == 2) return 3;
    if(n == 1) return 1;

    return ((2 * hanoi(n - 1)) + 1);
}

int main(){
    int n, teste = 0;
    
    while(1) {
        scanf("%d", &n);
        if(n == 0) break;
        printf("Teste %d\n%d\n", teste + 1, hanoi(n));
        teste++;
        printf("\n");
    }

    return 0;
}