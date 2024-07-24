#include <stdio.h>
#include <stdlib.h>

int main () {
    int vetor [40], aux=5, i;
    for (i=0; i<40; i++){
        vetor[i] = aux;
        aux--;
    }
    for(i=0; i<40; i++){
        printf ("vetor[%d] = %d\n", i, vetor[i]);
    }
    printf ("Conversao:\n");
    for (i=0; i<40; i++){
        if(vetor[i] < 0){
            vetor[i] = 0;
        }
    }
    for(i=0; i<40; i++){
        printf ("vetor[%d] = %d\n", i, vetor[i]);
    }



    system ("pause");
    return 0;
}
