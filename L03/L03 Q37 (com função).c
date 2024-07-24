#include <stdio.h>
#include <stdlib.h>

int valor (float C, float F);

int main () {
    float C, F = 50;

    printf ("\nCelcius        Farenheit\n\n");

    while (F <= 150){
        C = valor (C, F);
        printf ("%.2f          %.2f\n", C, F);
        F += 5;
    }


    system ("pause");
    return 0;
}


int valor (float C, float F){
    C = 5*((F-32)/9);
    return C;
}
