#include <stdio.h>

int main()
{
    int codigo;
    float quantidade, preco;

    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    printf("Digite a quantidade: ");
    scanf("%f", &quantidade);

    switch (codigo)
    {
        case 100:
            preco = 1.20;
            break;
        case 101:
            preco = 1.30;
            break;
        case 102:
            preco = 1.50;
            break;
        case 103:
            preco = 1.20;
            break;
        case 104:
            preco = 1.70;
            break;
        case 105:
            preco = 2.20;
            break;
        case 106:
            preco = 1.00;
            break;
        default:
            printf("Codigo inválido.");
            return 0;
    }

    printf("O valor a ser pago eh: %f", quantidade * preco);

    return 0;
}
