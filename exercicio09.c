#include <stdio.h>

int main() {
    int vet[10], vet_pares[10];
    int cont_pares = 0;

    // preenche o vetor com valores inteiros
    printf("Preencha o vetor:\n");
    for(int i = 0; i < 10; i++) {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &vet[i]);
    }

    // preenche o vetor de pares
    for(int i = 0; i < 10; i++) {
        if(vet[i] % 2 == 0) {
            vet_pares[cont_pares] = vet[i];
            cont_pares++;
        }
    }

    // imprime o vetor de pares
    printf("\nO vetor de pares e:\n");
    for(int i = 0; i < cont_pares; i++) {
        printf("%d ", vet_pares[i]);
    }
    printf("\n");

    return 0;
}