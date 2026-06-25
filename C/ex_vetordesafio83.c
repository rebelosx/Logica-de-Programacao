#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[20];
    srand(time(NULL));

    for (int i = 0; i < 20; i++) {
        vetor[i] = rand() % 100; 
        printf("O numero gerado foi: %d\n", vetor[i]);
    }
        printf("Ordem crescente: \n");
    // O i vai até 18 (i < 19), pois o j vai olhar sempre uma à frente
    for (int i = 0; i < 19; i++) { 
        for (int j = i + 1; j < 20; j++) { 
            if (vetor[i] > vetor[j]){
                int aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
    // Aqui sim vai até 20, pois queremos ver as 20 gavetas!
    for (int i = 0; i < 20; i++) {
        printf("%d ", vetor[i]);
    }
    return 0;
}