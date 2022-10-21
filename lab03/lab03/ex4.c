#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
 float a;
printf("Informe um numero: ");
scanf("%f", &a);
if (a>0){

    printf("A raiz desse numero eh: %.1f eh o quadrado dele eh: %.1f", sqrt(a), (a*a));

}

    return 0;
}

