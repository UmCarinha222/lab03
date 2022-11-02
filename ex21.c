#include <stdio.h>
#include <stdlib.h>
main()
{
      int a,b,ma,dif,mul,div, op;

      printf("Digite um numero: ");
      scanf("%d",&a);
      printf("Digite outro numero: ");
      scanf("%d",&b);
      printf("Escolha uma opcao: \n",op);
      scanf("%d", &op);
      switch(op)
      {
            case 1:
                    ma =(a+b)/2;
                    printf("A media e %d \n",ma);
                    break;
            case 2:
                    dif=(a-b);
                    printf("A diferenca e %d \n",dif);
                    break;
            case 3:
                    mul=(a*b);
                    printf("O produto e %d \n",mul);
                    break;
            case 4:
                    div=(a/b);
                    printf("A divisao da %d \n",div);
                    break;

                    default:
                             printf("Opcao invalida");
                    }
 return 0;
}
