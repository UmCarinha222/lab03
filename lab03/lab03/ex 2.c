#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
 int a, raiz;
 printf("Informe um numero: ");
 scanf("%d", &a);
 if (a>0){
    raiz = sqrt(a);
    printf("A raiz quadrada desse numero eh: %d", raiz);
 }else {
 printf("Esse numero e invalido");
 }

    return 0;
}
