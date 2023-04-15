// B

#include <stdio.h>

int main(){
    int vetor[5];

    for(int i = 0; i < 5; i++) {
        printf("Digite o valor para a seguinte posicao %d: ",i);
        scanf("%d", &vetor[i]);
    }

    printf("O resultado de numeros pares no vetor foi de: ");
    for(int i = 0; i < 5; i++) {
        if(vetor[i] % 2 == 0) {
            printf("%d", vetor[i]);
        }
    }

    return 0;
}