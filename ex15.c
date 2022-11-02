
#include <stdio.h>
int main()
{
int dia;

printf("\n\nEntre com o numero do dia da semana: ");
scanf("%d", &dia);
switch(dia)
{
case 1:
printf(" Dia = domingo");
break;

case 2:
printf(" Dia = segunda-feira");
break;
case 3:
printf(" Dia = terca-feira");
break;
case 4:
printf(" Dia = quarta-feira");
break;

case 5:
printf(" Dia = quinta-feira");
break;
case 6:
printf(" Dia = sexta-feira");
break;
case 7:
printf(" Dia = sabado");
break;
default:
printf(" Voce deve digitar um numero entre 1 e 7!!! --> Dia invalido!");
}
return 0;
}
