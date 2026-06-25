#include <stdio.h>
#include <stdlib.h>

int supersomador(int a, int b) {
    int soma = 0;
    for (int i = a; i <= b; i++) {
        soma = soma + i;
    }
    return soma;
}
float potencia(float a, int b) {
    float pot = 1;
    for (int i = 1; i <= b; i++){
        pot = pot * a;
    }
    return pot;
}
int main() {
    int num2, nm1, nm2;
    float num1;
    printf("Digite o primeiro numero:(base) ");
    scanf("%f", &num1);
    printf("Digite o segundo numero:(expoente) ");
    scanf("%d", &num2);
    float resposta = potencia(num1, num2);
    if (resposta == (int)resposta) {
        printf("A potencia de %.0f elevado a %d e: %.0f\n", num1, num2, resposta);
    } else {
        printf("A potencia de %.0f elevado a %d e: %.2f\n", num1, num2, resposta);
    }
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &nm1);
    printf("Digite o segundo numero: ");
    scanf("%d", &nm2);
    int resposta2 = supersomador(nm1, nm2);
    printf("A soma de %d e %d e: %d\n", nm1, nm2, resposta2);
    return 0;
}