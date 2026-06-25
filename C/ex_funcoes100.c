#include <stdio.h>

float calcular_media(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}
void resultadofinal(float valor_media) {
    if (valor_media >= 7) {
        printf("Aprovado com media: %.2f\n", valor_media);
    } else if (valor_media >= 5) {
        printf("Recuperacao com media: %.2f\n", valor_media);
    } else {
        printf("Reprovado com media: %.2f\n", valor_media);
    }
}
int main() {
    float num1, num2, num3, m;

    printf("Digite o primeiro nota: ");
    scanf("%f", &num1);
    printf("Digite o segundo nota: ");
    scanf("%f", &num2);
    printf("Digite o terceiro nota: ");
    scanf("%f", &num3);
    m = calcular_media(num1, num2, num3);
    resultadofinal(m);
    return 0;
}