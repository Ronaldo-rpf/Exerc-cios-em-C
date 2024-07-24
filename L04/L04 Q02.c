#include <stdio.h>
#include <stdlib.h>
int potenciaInt (int, int);

int main () {
    int exp, base, res;
    printf ("Base: ");
    scanf ("%d", &base);
    printf ("Expoente: ");
    scanf ("%d", &exp);

    if (exp == 0){
        printf ("1\n\n");
        system ("pause");
        return 0;
    }

    res = potenciaInt (base, exp);

    printf ("%d\n\n", res);

    system ("pause");
    return 0;
}

int potenciaInt (int b, int e){
    int aux;
    for (aux = 1; e != 0; e--){
        aux *= b;
    }
    return aux;
}
