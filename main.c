```c
#include <stdio.h>

int main() {
    int opcao;
    float saldo = 1000.00, valor;

    printf("===== SISTEMA BANCARIO =====\n");
    printf("Bem-vindo ao simulador de caixa eletronico!\n");

    do {
        printf("\n===== MENU PRINCIPAL =====\n");
        printf("1 - Consultar saldo\n");
        printf("2 - Depositar\n");
        printf("3 - Sacar\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");

        if (scanf("%d", &opcao) != 1) {
            printf("Entrada invalida! Reinicie o sistema e tente novamente.\n");
            return 1;
        }

        switch (opcao) {
            case 1:
                printf("Saldo atual: R$ %.2f\n", saldo);
                break;

            case 2:
                printf("Digite o valor do deposito: R$ ");

                if (scanf("%f", &valor) != 1) {
                    printf("Valor invalido! Reinicie o sistema e tente novamente.\n");
                    return 1;
                }

                if (valor > 0) {
                    saldo += valor;
                    printf("Deposito realizado com sucesso!\n");
                    printf("Novo saldo: R$ %.2f\n", saldo);
                } else {
                    printf("Valor invalido! O deposito deve ser maior que zero.\n");
                }
                break;

            case 3:
                printf("Digite o valor do saque: R$ ");

                if (scanf("%f", &valor) != 1) {
                    printf("Valor invalido! Reinicie o sistema e tente novamente.\n");
                    return 1;
                }

                if (valor <= 0) {
                    printf("Valor invalido! O saque deve ser maior que zero.\n");
                } else if (valor > saldo) {
                    printf("Saldo insuficiente para realizar o saque.\n");
                } else {
                    saldo -= valor;
                    printf("Saque realizado com sucesso!\n");
                    printf("Novo saldo: R$ %.2f\n", saldo);
                }
                break;

            case 0:
                printf("\nEncerrando o sistema bancario...\n");
                printf("Obrigado por utilizar nosso simulador!\n");
                printf("Saldo final: R$ %.2f\n", saldo);
                printf("Sistema encerrado com sucesso. Ate logo!\n");
                break;

            default:
                printf("Opcao invalida! Escolha 1, 2, 3 ou 0 para sair.\n");
                break;
        }

    } while (opcao != 0);

    return 0;
}
```
