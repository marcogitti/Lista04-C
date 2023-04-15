#include <stdio.h>

int main() {
    int vet_A[5], vet_B[5], vet_C[10];

    // preenche o vet_A
    printf("Preencha o vet_A:\n");
    for(int i = 0; i < 5; i++) {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &vet_A[i]);
    }

    // preenche o vet_B
    printf("\nPreencha o vet_B:\n");
    for(int i = 0; i < 5; i++) {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &vet_B[i]);
    }

    // copia os valores de vet_A para as primeiras posições de vet_C
    for(int i = 0; i < 5; i++) {
        vet_C[i] = vet_A[i];
    }

    // copia os valores de vet_B para as últimas posições de vet_C
    for(int i = 0; i < 5; i++) {
        vet_C[i+5] = vet_B[i];
    }

    // imprime o vet_C
    printf("\nO vetor resultante e:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", vet_C[i]);
    }
    printf("\n");

    return 0;
}