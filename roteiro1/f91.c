#include <stdio.h>

int f91(int n){
    if(n >= 101) return n - 10;
    
    int r;
    r = f91(f91(n + 11));
    
    return r;
}

int main(){
    int n, r;

    while(1){
        scanf("%d", &n);
        if(n == 0) break;

        r = f91(n);
        printf("f91(%d) = %d\n", n, r);
    }

    return 0;
}