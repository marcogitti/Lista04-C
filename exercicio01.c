// A

#include <stdio.h>

int main(){
    int vetor[5];
    int soma = 0;

    for(int i = 0; i < 5; i++) {
        printf("Digite o valor para a seguinte posicao: %d: ",i);
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < 5; i++) {
        soma += vetor[i];
    }

    printf("A soma dos valores foi de: %d\n", soma);

    return 0;
}