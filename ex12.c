#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   int num, loga;

    printf("Digite um numero:\n");
   scanf("%d",&num);
   if(num>0){
       loga = log(num);
       printf("O logaritimo desse numero eh: %d", loga);
       }
    else{
       printf("O numero eh invalido");
   }
   return 0;
}
