#include <stdio.h>
#include <stdlib.h>

int main () {
    int mat[6][6], i, j, k=0, aux=0;
    for (i=0; i<6; i++){
        for(j=0; j<6; j++){
            mat[i][j] = k--;
        }
    }
    for (i=0; i<6; i++){
        for(j=0; j<6; j++){
            if (i!=j && j+i!=6-1){
                mat[i][j] = 0;
            }
        }
    }
    for (i=0; i<6; i++){
        for(j=0; j<6; j++){
            printf ("%5d", mat[i][j]);
            aux++;
            if (aux == 6){
                printf("\n");
                aux=0;
            }
        }
    }



    system ("pause");
    return 0;
}
