
#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1, n2, n3, mediaponderada;
    printf("\nNota 1: ");
    scanf("%f", &n1);
    printf("\nNota 2: ");
    scanf("%f", &n2);
    printf("\nNota 3: ");
    scanf("%f", &n3);
    mediaponderada = ((n1*1) + (n2 *1) + (n3 * 2))/3;
    if (mediaponderada >=60){
        printf("\nNota: %.2f" , mediaponderada);
        printf("\nVoce foi aprovado, parabens!");
    } else {
        printf("\nNota: %.2f" , mediaponderada);
        printf("\nVoce foi reprovado, estude mais um pouco!");
    }
    return 0;
    }
