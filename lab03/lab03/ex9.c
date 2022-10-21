#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, prestacao;
    printf("Informe o salario: ");
    scanf("%f", &salario);
    printf("Informe o valor da prestacao: ");
    scanf("%f", &prestacao);
 if (prestacao > salario *0.2){
    printf("Emprestimo nao concedido");
 }else{
 printf("Emprestimo concedido");
 }
    return 0;
}
