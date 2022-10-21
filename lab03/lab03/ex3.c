#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
 int a, raiz, quadrado;
printf("Informe um numero: ");
scanf("%d", &a);
if (a>0){
    raiz = sqrt(a);
    printf("A raiz desse numero eh: %d", raiz);
}else{
quadrado = pow(a,2);
printf("O quadrado desse numero eh: %d", quadrado);
}

    return 0;
}

