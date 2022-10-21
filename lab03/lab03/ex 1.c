
#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a, b;
 printf("Informe o primeiro numero: ");
 scanf("%d", &a);
 printf("Informe o segundo numero: ");
 scanf("%d", &b);
 if(a>b){
    printf("%d eh maior", a);
 }else{
 printf("%d eh maior", b);
 }

    return 0;
}
