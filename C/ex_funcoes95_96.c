#include <stdio.h>
float media(float a, float b) {
    float media;
    media = (a + b) / 2;
    return media;
}
float somador(float a, float b) {
    float soma;
    soma = a + b;
    return soma;
}
int main() {
    float resposta ,num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    resposta = somador(num1, num2);
    printf("A soma dos numeros e: %.0f\n", resposta);
    resposta = media(num1, num2);
    printf("A media dos numeros e: %.2f\n", resposta);

    return 0;
}