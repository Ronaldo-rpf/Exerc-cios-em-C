#include <stdio.h>
#include <stdlib.h>
void ordenar (float, float, float);

int main () {
    float n1, n2, n3;
    printf ("Digite tres numeros (-1000 para sair): \n");
    scanf ("%f", &n1);
    while (n1 != -1000){
        scanf ("%f %f", &n2, &n3);
        ordenar (n1, n2, n3);
        printf ("Digite tres numeros (-1000 para sair): \n");
        scanf ("%f", &n1);
    }

    system ("pause");
    return 0;
}

void ordenar (float n1, float n2, float n3){
    if (n1 > n2 && n2 > n3){
        printf ("%.2f %.2f %.2f\n\n", n3, n2, n1);
        return;
    }
    if (n1 > n3 && n3 > n2){
        printf ("%.2f %.2f %.2f\n\n", n2, n3, n1);
        return;
    }
    if (n2 > n1 && n1 > n3){
        printf ("%.2f %.2f %.2f\n\n", n3, n1, n2);
        return;
    }
    if (n2 > n3 && n3 > n1){
        printf ("%.2f %.2f %.2f\n\n", n1, n3, n2);
        return;
    }
    if (n3 > n2 && n2 > n1){
        printf ("%.2f %.2f %.2f\n\n", n1, n2, n3);
        return;
    }
    if ( n3 > n1 && n1 > n2){
        printf ("%.2f %.2f %.2f\n\n", n2, n1, n3);
        return;
    }
}
