#include <stdio.h>
#include <stdlib.h>

int main () {
    int vet1[9], vet2[9], vet3[9], vet4[9], i, aux;
    for(i=0; i<9; i++){
        vet1[i] = i;
    }
    for(i=0, aux=0; i<9; i++, aux--){
        vet2[i] = aux;
    }
    for(i=0, aux=20; i<9; i++, aux++){
        vet3[i] = aux;
    }

    for(i=0; i<9; i++){
        if (i<3){
            vet4[i] = vet1[i];
        }
        else if (i>=3 && i<6){
            vet4[i] = vet2[i];
        }
        else{
            vet4[i] = vet3[i];
        }
    }

    for(i=0; i<9; i++){
        printf ("vet4[%d] = %d\n", i, vet4[i]);
    }



    system ("pause");
    return 0;
}
