#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int lado1, lado2, lado3, maior, medio, menor, triangulo;

    printf ("Digite o valor dos lados: \n");
    scanf ("%d %d %d", &lado1, &lado2, &lado3);

    if (lado1 > lado2){
        maior = lado1;
        medio = lado2;
    }
    if (lado1 < lado2){
        maior = lado2;
        medio = lado1;
    }
    if (medio > lado3){
        menor = lado3;
    }
    if (medio < lado3 && maior > lado3){
        menor = medio;
        medio = lado3;
    }
    if (maior < lado3){
        menor = medio;
        medio = maior;
        maior = lado3;
    }
    triangulo = sqrt (medio*medio + menor*menor);
    if (maior == triangulo){
        printf ("Esses valores podem ser usados para formar um triangulo retangulo.\n");
    }
    else {
        printf ("Esses valores NAO podem ser usados para formar um triangulo retangulo.\n");
    }


    system ("pause");
    return 0;
}
