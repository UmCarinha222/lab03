#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"Portuguese");
int ano;
printf("Digite o Ano q deseja consultar\n");
scanf("%d",&ano);
if (ano%400==0 || ano%4==0 && ano%100!=0){
printf("%d,é ano bissexto!",ano);
}else{
printf ("%d, não é ano bissexto!", ano);
}
return 0;
}
