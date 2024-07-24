#include <stdio.h>
#include <stdlib.h>

int main () {
    int exemplo[16], i, aux;
    for (i=0; i<16; i++){
        exemplo[i] = i;
    }
    for (i=0; i<8; i++){
        aux = exemplo[i];
        exemplo[i] = exemplo[i+8];
        exemplo[i+8] = aux;
    }
    for (i=0; i<16; i++){
        printf ("%d\n", exemplo[i]);
    }


    system ("pause");
    return 0;
}
