#include <stdio.h>

int main() {
    float hestagio = 0, dtrabalho = 0, meses = 0, horas_por_dia = 0;
    printf("Digite a quantidade de horas de estagio: ");
    scanf("%f", &hestagio);
    printf("Quantas horas de estagio voce faz por dia? ");
    scanf("%f", &horas_por_dia);
    dtrabalho = hestagio / horas_por_dia;
    meses = dtrabalho / 22;
    printf("A quantidade de dias que voce trabalhara e: %.2f\n", dtrabalho);
    printf("A quantidade de meses que voce trabalhara e: %.2f\n", meses);
    return 0;
}
