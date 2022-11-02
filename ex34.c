#include <stdio.h>

int main()
{
    float nota;
    int faltas;
    char conceito;

    printf("Digite a nota: ");
    scanf("%f", &nota);

    printf("Digite o numero de faltas: ");
    scanf("%d", &faltas);

    if (nota >= 9.0) conceito = 'A';
    else if (nota >= 7.5) conceito = 'B';
    else if (nota >= 5.0) conceito = 'C';
    else if (nota >= 4.0) conceito = 'D';
    else conceito = 'E';

    if (faltas > 20) conceito++;

    printf("Conceito: %c", conceito);

    return 0;
}
