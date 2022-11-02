#include <stdio.h>
#include <stdlib.h>

int main() {
   int valor;
        printf("Digite um valor: ");
        scanf(" %d" , & valor);

        int const A =  (0 == valor % 3);
        int const B =  (0 == valor % 5);

        if (A && !B) printf ("Divisivel por 3 mas nao por 5"); else
        if (B && !A) printf ("Divisivel por 5 mas nao por 3"); else
        if (B &&  A) printf ("Divisivel por 5 e 3");
}
