#include <stdio.h>
#include <stdlib.h>

int main () {
    int produto = 1, impar = 0;

    while (impar <= 15) {
        if (impar % 2 == 1){
            printf ("%d\n", impar);
            produto *= impar;
        }
        impar++;
    }

    printf ("O produto dos impares de 0 a 15 e:\n%d\n", produto);



    system ("pause");
    return 0;
}
