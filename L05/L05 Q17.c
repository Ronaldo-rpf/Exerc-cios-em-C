#include <stdio.h>
#include <stdlib.h>

int main () {
    int mat[5][5] = {0}, i, j;
    for (i=0; i<5; i++){
        for(j=0; j<5; j++){
            if (i == j){
                mat[i][j] = 1;
            }
        }
    }
    for (i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf ("mat[%d][%d] = %d\n", i, j, mat[i][j]);
        }
    }




    system ("pause");
    return 0;
}
