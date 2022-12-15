#include <stdio.h>
#include <string.h>

int checa_primo(int soma){
    if(soma == 2 || soma == 1) return 1;
    
    for(int i = 2; i < soma; i++){
        if((soma % i) == 0) return 0;
    }

    return 1;
}

int main(){
    char s[20];
    int soma; 

    while(scanf("%s", s) != EOF){
        soma = 0;

        for(int i = 0; i < strlen(s); i++){
            if(s[i] >= 97 && s[i] <= 122){
                soma += s[i] - 96;
            } else if(s[i] >= 65 && s[i] <= 90){
                soma += s[i] - 38;
            }
        }

        if(checa_primo(soma)) printf("It is a prime word.\n");
        else printf("It is not a prime word.\n");

        strcpy(s, "\0");
    }
    return 0;
}