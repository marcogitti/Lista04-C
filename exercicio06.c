#include <stdio.h>

int main() {
    int vetor1[5], vetor2[5], vetorInter[10];

    // preenche o vetor1
    printf("Preencha o vetor1:\n");
    for(int i = 0; i < 5; i++) {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &vetor1[i]);
    }

    // preenche o vetor2
    printf("\nPreencha o vetor2:\n");
    for(int i = 0; i < 5; i++) {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &vetor2[i]);
    }

    // intercala os valores dos vetores
    int posicao = 0;
    for(int i = 0; i < 5; i++) {
        vetorInter[posicao] = vetor1[i];
        vetorInter[posicao+1] = vetor2[i];
        posicao += 2;
    }

    // imprime o vetor intercalado
    printf("\nVetor intercalado:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", vetorInter[i]);
    }
    printf("\n");

    return 0;
}