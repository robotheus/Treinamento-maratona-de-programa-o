#include <stdio.h>

void main(){
    char s[1];
    int n, x, y, value;
    scanf("%d %d %s %d", &n, &x, s, &y);

    if(s[0] == '+') value = x + y;
    else if(s[0] == '*') value = x * y;

    if(value <= n) printf("OK\n");
    else printf("OVERFLOW\n");   
}