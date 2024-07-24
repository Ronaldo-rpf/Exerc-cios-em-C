#include <stdio.h>
#include <stdlib.h>

int main () {
    int vet [40], i, pares=0;
    for (i=0; i<40; i++){
        vet[i] = i;
    }
    for (i=0; i<40; i++){
        if (vet[i] % 2 == 0){
            pares++;
            printf ("Vet[%d] = %d\n", i, vet[i]);
        }
    }
    printf ("Esse vetor possui %d numeros pares.\n\n", pares);



    system ("pause");
    return 0;
}
