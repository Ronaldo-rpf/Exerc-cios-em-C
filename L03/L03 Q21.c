#include <stdio.h>
#include <stdlib.h>

int main () {
    int par = 0, soma = 0;

    while (par <= 30){
        if (par % 2 == 0){
            printf ("%d\n", par);
            soma += par;
        }
        par++;
    }

    printf ("A soma dos pares de 0 ate 30 e: %d\n\n", soma);




    system ("pause");
    return 0;
}
