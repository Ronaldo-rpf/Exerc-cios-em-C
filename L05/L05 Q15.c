#include <stdio.h>
#include <stdlib.h>

int main () {
    int vet[9] = {5, 7, 6, 9, 2, 8, 4, 0, 3}, i, indice = 0;

    for (i=0; i<=9; i++){
        printf ("%d\n", indice+1);
        indice = vet[indice]-1;
    }




    system ("pause");
    return 0;
}
