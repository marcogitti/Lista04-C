// D

#include <stdio.h>

int main(){
    int vetor[5];

    for(int i = 0; i < 5; i++) {
        printf("Digite o valor para a seguinte posicao: %d: ",i);
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < 5; i++) {
        printf("O DOBRO do valor na posicao, foi %d de: %d\n", i, vetor[i] * 2);
    }

    return 0;
}