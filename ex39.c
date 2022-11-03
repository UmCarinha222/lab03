#include <stdio.h>

int main()
{
    float salario, reajuste, bonus;
    int tempo;

    printf("Digite o salario atual do funcionario: ");
    scanf("%f", &salario);

    printf("Digite o tempo de serviço do funcionario (em anos): ");
    scanf("%d", &tempo);

    if (salario <= 500.0) reajuste = 0.25;
    else if (salario <= 1000.0) reajuste = 0.20;
    else if (salario <= 1500.0) reajuste = 0.15;
    else if (salario <= 2000.0) reajuste = 0.10;
    else reajuste = 0.0;

    if (tempo < 1) bonus = 0.0;
    else if (tempo <= 3) bonus = 100.0;
    else if (tempo <= 6) bonus = 200.0;
    else if (tempo <= 10) bonus = 300.0;
    else bonus = 500.0;

    printf("O salario reajustado e: %f", salario * (1 + reajuste) + bonus);

    return 0;
}
