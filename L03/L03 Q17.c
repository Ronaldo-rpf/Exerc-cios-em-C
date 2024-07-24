#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int n, x, contador = 1, e, exp = 1, fat = 1, fatorial = 1;

    printf ("Digite o valor de n:");
    scanf ("%d", &n);
    printf ("Digite o valor de x:");
    scanf ("%d", &x);

    if (x == 0){
        printf ("1\n");
        system ("PAUSE");
        return 0;
    }
    if (n == 0){
        printf ("1\n");
        system ("PAUSE");
        return 0;
    }

    e = 1 + pow(x,exp)/fat;

    while (n!=contador){
        exp++;
        fat++;
        while (fat!=0){
            fatorial *= fat;
            fat--;
        }
        e += pow(x,exp)/fatorial;
        contador++;
        fat = contador;
    }

    printf ("%d\n", e);

    system ("pause");
    return 0;
}
