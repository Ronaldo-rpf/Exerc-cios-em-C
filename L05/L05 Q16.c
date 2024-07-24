#include <stdio.h>
#include <stdlib.h>

int main () {
    int matriz[10][10], i, j, maior = 0, loci, locj;
    for (i=0; i<10; i++){
        for(j=0; j<10; j++){
            matriz[i][j] = i;
        }
    }
    for (i=0; i<10; i++){
        for(j=0; j<10; j++){
            if(matriz[i][j] > maior){
                maior = matriz[i][j];
                loci = i;
                locj = j;
            }
        }
    }

    printf ("O maior valor eh: %d, e esta na localizacao [%d][%d].\n\n", maior, loci, locj);


    system ("pause");
    return 0;
}
