#include <stdio.h>

int main()
{
    float Altura,AlturaxPeso=0.0;
    char Sexo;

    printf("Digite a sua altura (Ex.: 1.75):");
    scanf("%f",&Altura);

    printf("Digite o seu sexo (M para Masculino e F para Feminino):");
    fflush(stdin);
    scanf("%c",&Sexo);

    if(Sexo == 'M' || Sexo == 'm'){
        AlturaxPeso+=((72.7*Altura)-58.0);
        printf("O seu peso ideal e: %.3f\n",AlturaxPeso);
    }
    else
    {
        AlturaxPeso=((62.1*Altura)-44.7);
        printf("O seu peso ideal e: %.3f\n",AlturaxPeso);
    }

    system("pause");
    return 0;
}
