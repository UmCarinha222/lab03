#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
 int a, b;
printf("Informe um numero: ");
scanf("%d", &a);
printf("Informe o segundo numero: ");
scanf("%d", &b);
if(a>b){
    printf("O primeiro numero eh maior%d");
}if(b>a){
printf("O segundo numero eh maior");
}else{
printf("os numeros sao iguais");
}
    return 0;
}
