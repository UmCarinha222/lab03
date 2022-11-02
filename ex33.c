#include <stdio.h>

int main()
{
    float preco_antigo, preco_novo, percentual;

    printf("Digite o preco antigo do produto: ");
    scanf("%f", &preco_antigo);

    if (preco_antigo <= 50) percentual = 0.05;
    else if (preco_antigo <= 100) percentual = 0.1;
    else percentual = 0.15;

    preco_novo = preco_antigo * (1 + percentual);

    printf("O preco novo do produto eh: %f\n", preco_novo);

    if (preco_novo <= 80) printf("Barato");
    else if (preco_novo <= 120) printf("Normal");
    else if (preco_novo <= 200) printf("Caro");
    else printf("Muito caro");

    return 0;
}
