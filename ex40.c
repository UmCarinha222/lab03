#include <stdio.h>

int main()
{
    float custo_fabrica, custo_consumidor, comissao, impostos;

    printf("Digite o custo de fabrica: ");
    scanf("%f", &custo_fabrica);

    if (custo_fabrica <= 12000) comissao = 0.05;
    else if (custo_fabrica <= 25000) comissao = 0.1;
    else comissao = 0.15;

    if (custo_fabrica <= 12000) impostos = 0;
    else if (custo_fabrica <= 25000) impostos = 0.15;
    else impostos = 0.2;

    custo_consumidor = custo_fabrica * (1 + comissao + impostos);

    printf("O custo ao consumidor eh: %f", custo_consumidor);

    return 0;
}
