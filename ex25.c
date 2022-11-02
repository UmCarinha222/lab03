#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   int a, b, c, delta, raiz, raiz1, raiz2;
 printf("Equacao do 2o grau da forma: ax^2 + bx + c\n");
 printf("Digite o valor de A: ");
 scanf("%d", &a);
 if(a==0){
    printf("Se a = 0, nao eh equacao do segundo grau.");
 }else{
 printf("Digite o valor de B: ");
 scanf("%d", &b);
 printf("Digite o valor de C: ");
 scanf("%d", &c);
 delta = pow(b,2) - (4*a*c);
 }
 if (delta<0){
    printf("Delta menor que 0. Raízes imaginarias.");
 }else{
    if(delta==0){
        raiz = -b / (2*a);
            printf("Delta = 0 , raiz = %d",raiz);
    }else{
            raiz1 = (-b + sqrt(delta) ) / (2*a);
            raiz2 = (-b - sqrt(delta) ) / (2*a);
            printf("Raizes: %d",raiz1," e %d",raiz2);
    }
 }


}
