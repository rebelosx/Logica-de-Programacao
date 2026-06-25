#include <stdio.h>

int main() {
    char nome[5][30];
    char sexo[5];
    float salario[5];
    
    for (int i = 0; i < 5; i++) {
        printf("Digite o nome %d do funcionario(a): ", i + 1);
        fgets (nome[i], 30, stdin);
        printf("Digite o sexo do funcionario(a) %d:(M/F)\n", i + 1);
        scanf(" %c", &sexo[i]);
        getchar(); // Limpa o buffer do teclado
        printf("Digite o salario do funcionario(a) %d: R$", i + 1);
        scanf("%f", &salario[i]);
        getchar(); // Limpa o buffer do teclado
    }
    for (int i = 0; i < 5; i++) {
        if (sexo[i] == 'f' || sexo[i] == 'F') {
            if (salario[i] > 5000) {
                printf("\nO salario do funcionario(a) %s e: R$%.2f\n", nome[i], salario[i]);
            }
        }
    }
    return 0;
}