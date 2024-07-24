#include <stdio.h>
#include <stdlib.h>

int main () {
    int vet1[20], vet2[20], vet3[20], i, aux;
    for(i=0, aux=0; i<20; i++, aux--){
        vet1[i] = aux;
    }
    for(i=1; i<20; i++){
        vet2[i] = i;
    }
    for(i=0; i<20; i++){
        if(i % 2 == 0){
            vet3[i] = vet1[i];
        }
        if(i % 2 == 1){
            vet3[i] = vet2[i];
        }
    }
    for(i=0; i<20; i++){
        printf ("vet3[%d] = %d\n", i, vet3[i]);
    }


    system ("pause");
    return 0;
}
