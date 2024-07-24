#include <stdio.h>
#include <stdlib.h>

int main () {
    int vet[50] = {1, 0, 111, 23, 0, 45, 56, 33, 0, 55, 66, 67, 43}, i, j, aux;

    for (j=0; j<50; j++){
        for (i=0; i<49; i++){
            if (vet[i] < vet[i+1]){
                aux = vet[i+1];
                vet[i+1] = vet[i];
                vet[i] = aux;
            }
        }
    }
    for(i=0; i<50; i++){
        printf ("vet[%d] = %d\n", i, vet[i]);
    }

    system ("pause");
    return 0;
}
