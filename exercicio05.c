// E

#include <stdio.h>
#include <math.h>

int main(){
    int vetor[5] = {2, 3, 5, 6, 8};
    int tamanho = sizeof(vetor) / sizeof(int);

    for(int i = 0; i < tamanho; i++) {
        if(vetor[i] % 2 != 0) {
            printf("A Raiz Quadrada de %d e %.2f\n", vetor[i], sqrt(vetor[i]));
        }
    }

    return 0;
}