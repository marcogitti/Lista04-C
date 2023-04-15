// C

#include <stdio.h>

int main() {
    int vetor[5];
    int maiorValor, menorValor;

    for(int i = 0; i < 5; i++) {
        printf("Digite um valor para a posicao: %d: ",i);
        scanf("%d", &vetor[i]);
    }

    maiorValor = vetor[0];
    menorValor = vetor[0];

    for(int i = 0; i < 5; i++) {
        if(vetor[i] > maiorValor) {
            maiorValor = vetor[i];
        }
        if(vetor[i] < menorValor) {
            menorValor = vetor[i];
        }
    }

    printf("O MAIOR Valor do vetor, foi de: %d\n", maiorValor);
    printf("O MENOR valor do vetor, foi de: %d\n", menorValor);

    return 0;
}