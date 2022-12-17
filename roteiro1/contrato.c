#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void concatenar_letra(char texto[], char letra){
    int tamanho = strlen(texto);
    texto[tamanho] = letra;
    texto[tamanho + 1] = '\0'; 
}

int verifica_zero(char texto[]){
    int x;
    
    for(int j = 0; j < strlen(texto); j++){
        if(texto[j] == '0') x = 1;
        else {
            x = 0;
            break;
        }
    }

    if(x == 1) return 1;
    else return 0;
}

int verifica_todo(char texto[], char padrao[]){
    int x;

    for(int i = 0; i < strlen(texto); i++){
        if(texto[i] == padrao[0]) x = 1;
        else{
            x = 0;
            break;
        }
    }

    if(x == 1) return 1;
    else return 0;
}

void trim(char *s){
    int count = 0;
    while (s[count] == '0' && s[0] == '0') count++;

    if (count != 0) {
        int i = 0;
        while (s[i + count] != '\0') {
            s[i] = s[i + count];
            i++;
        }   

        s[i] = '\0';
    }
}

int main(){
    char a[1], b[102], r[102];
    int x, y;

    while(1){
        scanf("%s %s", a, b);
        
        if(atoi(a) == 0 && atoi(b) == 0) break;

        for(int i = 0; i < strlen(b); i++){
            if(a[0] != b[i]) concatenar_letra(r, b[i]);
        }

        if(verifica_zero(r) || verifica_todo(b, a)) printf("0\n");
        else if(r[0] == '0') {
            trim(r);
            printf("%s\n", r);
        } else printf("%s\n", r);
        
        strcpy(r, "\0");
    }
    
    return 0;
}