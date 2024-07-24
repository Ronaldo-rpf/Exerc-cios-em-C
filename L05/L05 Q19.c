#include <stdio.h>
#include <stdlib.h>

int main () {
    int mat[6][6] = {1,2,3,10,11,12,13,14,15,5,6,7,8,4,16,3,2,1,6}, i, j, cont;
    for (i=0; i<6; i++){
        for (j=0; j<6; j++){
            if (mat[i][j] > 10){
                cont++;
                printf ("mat[%d][%d] = %d\n", i, j, mat[i][j]);
            }
        }
    }
    printf ("Essa matriz possui %d valores maiores que 10.\n\n", cont);



    system ("pause");
    return 0;
}
