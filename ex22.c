#include <stdio.h>
#include <stdlib.h>
main()
{
      int idade, tempo;
      printf("Escreva a idade: ");
      scanf("%d", &idade);
      printf("Escreva o tempo de trabalho: ");
      scanf("%d", &tempo);
      if(idade >= 65){
        printf("Ele pode aposentar");
      }else{
      if(tempo >= 30){
        printf("Ele pode aposentar");
      }else{
      if(idade >= 60 && tempo >= 25){
        printf("Ele pode aposentar");
      }
      }
      }
}

