#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, media;
    printf("Escreva a primeira nota: ");
    scanf("%f", &n1);
    printf("Escreva a segunda nota: ");
    scanf("%f", &n2);
    media = (n1+n2)/2;
    if (n1<0 || n2<0 || n1>10 || n2>10){
      printf("Valor invalido");
    }else {
    printf("A media da sua nota eh: %.2f", media);
    }

    return 0;
}
