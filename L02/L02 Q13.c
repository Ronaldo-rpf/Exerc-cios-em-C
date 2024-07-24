#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int valor, notas50, notas20, notas10;
    printf ("Digite o valor a ser pago: ");
    scanf ("%d", &valor);

    if (valor >= 50){
        notas50 = valor/50;
        valor = valor % 50;
        notas20 = valor/20;
        valor = valor%20;
        notas10 = valor/10;
        valor = valor%10;
        printf ("%d notas de 50\n%d notas de 20\n%d notas de 10\n%d notas de 1\n", notas50, notas20, notas10, valor);

        system ("pause");
        return 0;
    }

    if (valor < 50 && valor >= 20) {
        notas20 = valor/20;
        valor = valor%20;
        notas10 = valor/10;
        valor = valor%10;
        printf ("%d notas de 20\n%d notas de 10\n%d notas de 1\n", notas20, notas10, valor);

        system ("pause");
        return 0;
    }

    if (valor < 20 && valor >= 10) {
        notas10 = valor/10;
        valor = valor%10;
        printf ("%d notas de 10\n%d notas de 1\n", notas10, valor);

        system ("pause");
        return 0;
    }

    if (valor < 10) {
        printf ("%d notas de 1\n", notas10, valor);

        system ("pause");
        return 0;
    }



    system ("pause");
    return 0;
}
