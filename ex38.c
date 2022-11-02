#include <stdio.h>

const int ANO_ATUAL = 2022;

int main() {
    int dia, mes, ano;

    printf("Digite o dia: ");
    scanf("%d", &dia);

    printf("Digite o mes: ");
    scanf("%d", &mes);

    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (ano > ANO_ATUAL) {
        printf("Ano invalido.");
    } else if (mes < 1 || mes > 12) {
        printf("Mês invalido.");
    } else if (dia < 1 || dia > 31) {
        printf("Dia invalido.");
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        if (dia > 30) {
            printf("Dia invalido.");
        } else {
            printf("Data valida.");
        }
    } else if (mes == 2) {
        if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0) {
            if (dia > 29) {
                printf("Dia invalido.");
            } else {
                printf("Data valida.");
            }
        } else {
            if (dia > 28) {
                printf("Dia invalido.");
            } else {
                printf("Data valida.");
            }
        }
    } else {
        printf("Data valida.");
    }

    return 0;
}
