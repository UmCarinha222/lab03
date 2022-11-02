#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float trab_lab, av_seme, exa, media, conceito;

printf("Informe a nota do trabalho: ");
scanf("%f",&trab_lab);
printf("Nota da avaliação semestral:");
scanf("%f",&av_seme);
printf("Exame final:");
scanf("%f",&exa);

media = ((trab_lab*2)+(av_seme*3)+(exa*5))/10;

if (media >=3 && media <4.9){
printf("Recuperacao");
}
if (media >=0 && media <2.9){
printf("Reprovado");
}
if(media >=5 && media<=10){
printf("Aprovado");
}
}
