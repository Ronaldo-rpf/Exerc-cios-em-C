#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int x, n;
    float ln, S;

    printf ("Digite o valor de x: ");
    scanf ("%d", &x);
    printf ("Digite o valor de n: ");
    scanf ("%d", &n);

    S = log(x);

    while (n != 0){
        S += pow(x, n)/n;
        n--;
    }

    printf ("S = %f\n\n", S);


    system ("pause");
    return 0;
}
