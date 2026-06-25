#include <stdio.h>

float maior (float a, float b, float c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}
int main () {
    float a, b, c;
    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    printf("Digite o terceiro numero: ");
    scanf("%f", &c);
    float resultado = maior(a, b, c);
    if (resultado == (int)resultado) {
        printf("O maior numero e: %.0f\n", resultado);
    } else {
        printf("O maior numero e: %.2f\n", resultado);
    }
    return 0;
}