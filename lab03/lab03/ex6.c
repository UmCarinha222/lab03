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
    printf("O primeiro numero eh maior e sua diferenca eh: %d", a-b);
}if(b>a){
printf("O segundo numero eh maior e sua diferenca eh: %d", b-a);
}
    return 0;
}


