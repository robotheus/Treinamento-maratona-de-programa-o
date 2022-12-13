#include <stdio.h>

void main(){
    int n, s = 0, x;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &x);
        s += x;
    }

    printf("%d\n", s);
}