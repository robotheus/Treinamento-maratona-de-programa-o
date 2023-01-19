#include <stdio.h>

int main(){
    int estado = 0, num_leituras, capacidade, saida, entrada, acesso = 0;
    char resposta = 'N';
    scanf("%d %d", &num_leituras, &capacidade);

    for(int i = 0; i < num_leituras; i++){
        scanf("%d %d", &saida, &entrada);
        estado -= saida;
        estado += entrada;

        if((estado > capacidade) && acesso == 0){
            resposta = 'S';
            acesso = 1;
        }
    }

    printf("%c\n", resposta);

    return 0;
}