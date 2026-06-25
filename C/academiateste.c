#include <stdio.h>
#include <string.h>

char bordapadrao = '*';
// Função que usa 'char' para desenhar uma linha de borda customizada
void desenharLinha(char caractere, int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        printf("%c", caractere);
    }
    printf("\n");
}
// Submenu específico para o treino de peito
void submenuPeito() {
    desenharLinha(bordapadrao, 50);
    printf("|             TREINO A - PEITO E TRICEPS         |\n");
    desenharLinha(bordapadrao, 50);
    printf("| 1. Supino Inclinado com Halteres               |\n");
    printf("| 2. Triceps Corda                               |\n");
    printf("| 0. Voltar                                      |\n");
    desenharLinha(bordapadrao, 50);
    
    int opcao;
    printf("Escolha um exercicio para saber mais: ");
    scanf("%d", &opcao);
    switch (opcao) {
    case 1:
        printf("\nSupino Inclinado com Halteres:\n");
        printf("- 3 series de 12 repeticoes\n");
        printf("- Descanso de 60 segundos entre as series\n");
        break;
    case 2:
        printf("\nTriceps Corda:\n");
        printf("- 3 series de 12 repeticoes\n");
        printf("- Descanso de 60 segundos entre as series\n");
        break;
    case 0:
        printf("\nSaindo do programa!\n");
        return; // Voltar para o menu principal
    default:
        printf("\nOpcao invalida no treino!\n");
        submenuPeito(); // Chamada recursiva para manter o usuario aqui
    }
}
// Submenu específico para o treino de costas
void submenuCostas() {
    desenharLinha(bordapadrao, 50);
    printf("|             TREINO B - COSTAS E BICEPS         |\n");
    desenharLinha(bordapadrao, 50);
    printf("| 1. Puxada Frontal na Polia                    |\n");
    printf("| 2. Rosca Direta com Barra                     |\n");
    printf("| 0. Voltar                                      |\n");
    desenharLinha(bordapadrao, 50);
    
    int opcao;
    printf("Escolha um exercicio para saber mais: ");
    scanf("%d", &opcao);
    switch (opcao) {
    case 1:
        printf("\nPuxada Frontal na Polia:\n");
        printf("- 3 series de 12 repeticoes\n");
        printf("- Descanso de 60 segundos entre as series\n");
        break;
    case 2:
        printf("\nRosca Direta com Barra:\n");
        printf("- 3 series de 12 repeticoes\n");
        printf("- Descanso de 60 segundos entre as series\n");
        break;
    case 0:
        printf("\nSaindo do programa!\n");
        return; // Voltar para o menu principal
    default:
        printf("\nOpcao invalida no treino!\n");
        submenuCostas(); // Chamada recursiva para manter o usuario aqui
    }
}
void submenuPernas() {
    desenharLinha(bordapadrao, 50);
    printf("|             TREINO C - PERNAS E GLUTEOS        |\n");
    desenharLinha(bordapadrao, 50);
    printf("| 1. Agachamento Livre                          |\n");
    printf("| 2. Leg Press                                 |\n");
    printf("| 0. Voltar                                      |\n");
    desenharLinha(bordapadrao, 50);

    int opcao;
    printf("Escolha um exercicio para saber mais: ");
    scanf("%d", &opcao);
    switch (opcao) {
    case 1:
        printf("\nAgachamento Livre:\n");
        printf("- 3 series de 12 repeticoes\n");
        printf("- Descanso de 60 segundos entre as series\n");
        break;
    case 2:
        printf("\nLeg Press:\n");
        printf("- 3 series de 12 repeticoes\n");
        printf("- Descanso de 60 segundos entre as series\n");
        break;
    case 0:
        printf("\nSaindo do programa!\n");
        return; // Voltar para o menu principal
    default:
        printf("\nOpcao invalida no treino!\n");
        submenuPernas(); // Chamada recursiva para manter o usuario aqui
    }
}
void submenuOmbros() {
    desenharLinha(bordapadrao, 50);
    printf("|             TREINO D - OMBROS E TRAPEZIOS      |\n");
    desenharLinha(bordapadrao, 50);
    printf("| 1. Elevação Lateral com Halteres              |\n");
    printf("| 2. Encolhimento de Ombros com Barra           |\n");
    printf("| 0. Voltar                                      |\n");
    desenharLinha(bordapadrao, 50);

    int opcao;
    printf("Escolha um exercicio para saber mais: ");
    scanf("%d", &opcao);
    switch (opcao) {
    case 1:
        printf("\nElevação Lateral com Halteres:\n");
        printf("- 3 series de 12 repeticoes\n");
        printf("- Descanso de 60 segundos entre as series\n");
        break;
    case 2:
        printf("\nEncolhimento de Ombros com Barra:\n");
        printf("- 3 series de 12 repeticoes\n");
        printf("- Descanso de 60 segundos entre as series\n");
        break;
    case 0:
        printf("\nSaindo do programa!\n");
        return; // Voltar para o menu principal
    default:
        printf("\nOpcao invalida no treino!\n");
        submenuOmbros(); // Chamada recursiva para manter o usuario aqui
    }
}
void submenuBracos() {
    desenharLinha(bordapadrao, 50);
    printf("|             TREINO E - BRACOS E ANTEBRACOS     |\n");
    desenharLinha(bordapadrao, 50);
    printf("| 1. Rosca Martelo com Halteres                  |\n");
    printf("| 2. Rosca Inversa com Barra                     |\n");
    printf("| 0. Voltar                                      |\n");
    desenharLinha(bordapadrao, 50);

    int opcao;
    printf("Escolha um exercicio para saber mais: ");
    scanf("%d", &opcao);
    switch (opcao) {
    case 1:
        printf("\nRosca Martelo com Halteres:\n");
        printf("- 3 series de 12 repeticoes\n");
        printf("- Descanso de 60 segundos entre as series\n");
        break;
    case 2:
        printf("\nRosca Inversa com Barra:\n");
        printf("- 3 series de 12 repeticoes\n");
        printf("- Descanso de 60 segundos entre as series\n");
        break;
    case 0:
        printf("\nSaindo do programa!\n");
        return; // Voltar para o menu principal
    default:
        printf("\nOpcao invalida no treino!\n");
        submenuBracos(); // Chamada recursiva para manter o usuario aqui
    }
}
void modificarMenu() {
    printf("Digite qual caractere deseja usar para as linhas: ");
    scanf(" %c", &bordapadrao);
    while (getchar() != '\n'); // Limpa o buffer de entrada, pega simplesmente o primeiro caractere e ignora o resto até o valor ser o enter (\n)
    printf("Caractere para as linhas modificado para '%c'!\n\n", bordapadrao);
}
// Função principal que exibe o menu principal do sistema
void menuPrincipal() {
    desenharLinha(bordapadrao, 50);
    printf("|            ACADEMY SYSTEM - MENU               |\n");
    desenharLinha(bordapadrao, 50);
    printf("| 1. Ver Treino de Peito                         |\n");
    printf("| 2. Ver Treino de Costas                        |\n");
    printf("| 3. Ver Treino de Pernas                        |\n");
    printf("| 4. Ver Treino de Ombros                        |\n");
    printf("| 5. Ver Treino de Bracos                        |\n");
    printf("| 6. Para Modificar o menu (como linhas)         |\n");
    printf("| 0. Sair do Programa                            |\n");
    desenharLinha(bordapadrao, 50);

    int opcao;
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    switch (opcao) {
    case 1:
        submenuPeito();
        menuPrincipal();
        break;
    case 2:
        submenuCostas();
        menuPrincipal();
        break;
    case 3:
        submenuPernas();
        menuPrincipal();
        break;
    case 4:
        submenuOmbros();
        menuPrincipal();
        break;
    case 5:
        submenuBracos();
        menuPrincipal();
        break;
    case 6:
        modificarMenu();
        menuPrincipal();
        break;
    case 0:
        printf("Saindo... Bons treinos!\n");
        return;
    default:
        printf("Opcao incorreta! Tente novamente.\n");
        menuPrincipal();
    }
}

int main() {
    // Inicializa o sistema chamando o menu principal
    menuPrincipal();
    return 0;
}