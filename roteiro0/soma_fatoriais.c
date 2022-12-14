#include <stdio.h>

long long int fat(long long int x){
    long long int f = 1;
    
    for(long long int i = x; i > 1; i--){
        f *= i;
    }

    return f;
}

int main(){
    long long int n, m, r;

    while(scanf("%lld %lld", &n, &m) != EOF){
        r = fat(n) + fat(m);
        printf("%lld\n", r);
    }

    return 0;
}