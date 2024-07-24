#include <stdio.h>
#include <stdlib.h>

int main () {
    int vetor[40], i;
    for(i=0; i<40; i++){
        vetor[i] = i;
    }
    for(i=0; i<40; i++){
        vetor[i+1] = vetor[i];
    }
    for(i=0; i<40; i++){
        printf ("vetor[%d] = %d\n", i, vetor[i]);
    }




    system ("pause");
    return 0;
}
