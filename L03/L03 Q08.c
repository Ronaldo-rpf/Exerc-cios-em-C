#include <stdio.h>
#include <stdlib.h>

int main () {
    int lado, lado_base, linhas = 0;
    printf ("Digite a medida dos lados do quadrado (de 0 a 20): ");
    scanf ("%d", &lado_base);
    lado = lado_base;

    if (lado == 0 || lado == 1){
        printf ("Nao e possivel formar um quadrado com esses valores.\n");
    }

    else {
        while (linhas != lado){
        while (lado != 0){
            printf ("*");
            lado--;
        }
        lado = lado_base;
        printf ("\n");
        linhas++;
        }
    }



    system ("pause");
    return 0;
}
