#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    float a, b, c, delta, raiz1, raiz2;
    printf ("Digite os valore de a, b e c respectivamente: \n");
    scanf ("%f %f %f", &a, &b, &c);
    delta = (b*b)-4*a*c;
    if (delta < 0){
        printf ("Esse polinomio nao tem raizes reais. \n");
    }
    if (delta > 0){
            raiz1 = -b + (sqrt(delta)) / (2*a);
            raiz2 = -b - (sqrt(delta)) / (2*a);
            printf ("Raizes reais: %.2f, %.2f \n", raiz1, raiz2);
    }
    if (delta == 0) {
        raiz1 = -b / (2*a);
        printf ("Raiz real: %.2f\n", raiz1);
    }




    system ("pause");
    return 0;
}
