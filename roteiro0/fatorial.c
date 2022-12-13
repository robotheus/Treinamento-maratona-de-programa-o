#include <stdio.h>

void main(){
    int n, x = 1;
    scanf("%d", &n);

    for(int i = n; i > 1; i--){
        x = x * i;
    }

    printf("%d\n", x);
}
