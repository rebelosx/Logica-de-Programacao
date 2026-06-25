#include <stdio.h>

int main() {
    char vetor[9][30];// vetor para guardar o nome de cada pessoa até 30 caracteres.
    int vetor2[9];// vetor2 para guardar a idade de cada pessoa
    for (int i = 0; i < 9; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        fgets(vetor[i], sizeof(vetor[i]), stdin); // Lê o nome da pessoa
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &vetor2[i]); // Lê a idade da pessoa
        getchar(); // Limpa o buffer de entrada
    }
    for (int i = 0; i < 9; i++) {
        if (vetor2[i] < 18) {
            printf("(A ou O) %s e menor de idade.\n", vetor[i]);
        }
    }
    return 0;
}