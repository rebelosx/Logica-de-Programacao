#include <stdio.h>

int main() {
    int vetor[10];

    for (int i = 0; i < 10; i++) {
        if (vetor [i] % 2 == 0) {
            vetor[i] = 5;
        } else {
            vetor[i] = 3;
        }
        
    }
    printf("Valores do vetor:\n");
    
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}