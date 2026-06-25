#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função criada para limpar o buffer do teclado com 100% de certeza no GCC
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    int op, op1, op2, itemsale;
    int mouse = 30, teclado = 70, mousepad = 45, carrinho = 0;
    int quantM = 0, contaM = 0, quantT = 0, quantP = 0, contaT = 0, contaP = 0;
    float saldo = 0, total = 0;
    float dep, ret;

    srand(time(NULL));
    itemsale = rand() % 31;

    do {
        system("cls"); 
        printf("--- Bem vindo a lojinha ---\n");
        printf("Saldo atual: R$ %.2f\n", saldo);
        printf("Seu carrinho tem %d produtos.\nE no total deu: R$ %.2f.\nTem %d produtos disponiveis no estoque total.\n", carrinho, total, itemsale);
        printf("\nO que voce quer fazer: 1- Saldo, 2- Produtos, 0- Sair\n");
        printf("Opcao: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                do {
                    system("cls"); 
                    printf("[ MENU SALDO ]\n");
                    printf("Saldo atual: R$ %.2f\n\n", saldo);
                    printf("1- Depositar, 2- Retirar, 3- Saldo atual, 0- Voltar: ");
                    scanf("%d", &op1);

                    switch (op1) {
                        case 1:
                            printf("Valor do deposito: ");
                            scanf("%f", &dep);
                            saldo += dep;
                            printf("Novo saldo: R$ %.2f\n", saldo);
                            printf("\nPressione ENTER para continuar...");
                            limparBuffer(); getchar(); 
                            break;
                        case 2:
                            printf("Quanto deseja retirar? ");
                            scanf("%f", &ret);
                            if (ret <= saldo) {
                                saldo -= ret;
                                printf("Retirada feita! Novo saldo: R$ %.2f\n", saldo);
                            } else {
                                printf("Saldo insuficiente para essa retirada!\n");
                            }
                            printf("\nPressione ENTER para continuar...");
                            limparBuffer(); getchar();
                            break;
                        case 3:
                            printf("Seu saldo e: R$ %.2f\n", saldo);
                            printf("\nPressione ENTER para continuar...");
                            limparBuffer(); getchar();
                            break;
                        case 0:
                            break;
                        default:
                            printf("Opcao invalida!\n");
                            printf("\nPressione ENTER para continuar...");
                            limparBuffer(); getchar();
                    }
                } while (op1 != 0);
                break;

            case 2:
                if (itemsale <= 0) {
                    system("cls");
                    printf("\n[AVISO] Desculpe, a loja esta sem estoque no momento!\n");
                    printf("\nPressione ENTER para voltar...");
                    limparBuffer(); getchar();
                } else {
                    do {
                        system("cls"); 
                        printf("[ PRODUTOS ]\n");
                        printf("[ESTOQUE DISPONIVEL: %d]  |  [SEU SALDO: R$ %.2f]\n\n", itemsale, saldo);
                        printf("1- Mouse (R$30), 2- Teclado (R$70), 3- Mousepad (R$45), 0- Voltar\n");
                        printf("Opcao: ");
                        scanf("%d", &op2);

                        switch (op2) {
                            case 1:
                                printf("Quantos mouses voce quer comprar? ");
                                scanf("%d", &quantM);
                                contaM = mouse * quantM;
                                if (saldo >= contaM && itemsale > 0 && quantM <= itemsale) {
                                    total += contaM;
                                    saldo -= contaM;
                                    itemsale -= quantM;
                                    carrinho += quantM;
                                    printf("Voce comprou %d Mouse(s) por R$ %d\n", quantM, contaM);
                                } else if (itemsale <= 0) {
                                    printf("Produto esgotado!\n");
                                } else if (quantM > itemsale) {
                                    printf("Nao temos essa quantidade de mouses no estoque!\n");
                                } else {
                                    printf("Saldo insuficiente para essa quantidade!\n");
                                }
                                printf("\nPressione ENTER para continuar...");
                                limparBuffer(); getchar();
                                break;

                            case 2:
                                printf("Quantos teclados voce quer comprar? ");
                                scanf("%d", &quantT);
                                contaT = teclado * quantT;
                                if (saldo >= contaT && itemsale > 0 && quantT <= itemsale) {
                                    total += contaT;
                                    saldo -= contaT;
                                    itemsale -= quantT;
                                    carrinho += quantT;
                                    printf("Voce comprou %d Teclado(s) por R$ %d\n", quantT, contaT);
                                } else if (itemsale <= 0) {
                                    printf("Produto esgotado!\n");
                                } else if (quantT > itemsale) {
                                    printf("Nao temos essa quantidade de teclados no estoque!\n");
                                } else {
                                    printf("Saldo insuficiente para essa quantidade!\n");
                                }
                                printf("\nPressione ENTER para continuar...");
                                limparBuffer(); getchar();
                                break;

                            case 3:
                                printf("Quantos mousepads voce quer comprar? ");
                                scanf("%d", &quantP);
                                contaP = mousepad * quantP;
                                if (saldo >= contaP && itemsale > 0 && quantP <= itemsale) {
                                    total += contaP;
                                    saldo -= contaP;
                                    itemsale -= quantP;
                                    carrinho += quantP;
                                    printf("Voce comprou %d Mousepad(s) por R$ %d\n", quantP, contaP);
                                } else if (itemsale <= 0) {
                                    printf("Produto esgotado!\n");
                                } else if (quantP > itemsale) {
                                    printf("Nao temos essa quantidade de mousepads no estoque!\n");
                                } else {
                                    printf("Saldo insuficiente para essa quantidade!\n");
                                }
                                printf("\nPressione ENTER para continuar...");
                                limparBuffer(); getchar();
                                break;

                            case 0:
                                break;
                            default:
                                printf("Produto inexistente.\n");
                                printf("\nPressione ENTER para continuar...");
                                limparBuffer(); getchar();
                        }

                        if (itemsale == 0 && op2 != 0) {
                            printf("\n[AVISO] O estoque acabou mundialmente! Voltando ao menu principal...\n");
                            printf("\nPressione ENTER para continuar...");
                            limparBuffer(); getchar();
                        }
                    } while (op2 != 0 && itemsale > 0);
                }
                break;

            case 0:
                system("cls");
                printf("Saindo da loja. Ate logo!\n");
                break;
            default:
                printf("Opcao invalida no menu principal.\n");
                printf("\nPressione ENTER para continuar...");
                limparBuffer(); getchar();
        }
    } while (op != 0);

    return 0;
}
