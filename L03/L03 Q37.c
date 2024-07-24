#include <stdio.h>
#include <stdlib.h>

int main () {
    float C, F = 50;

    printf ("\nCelcius        Farenheit\n\n");

    while (F <= 150){
        C = 5*((F-32)/9);
        printf ("%.2f          %.2f\n", C, F);
        F += 5;
    }


    system ("pause");
    return 0;
}
