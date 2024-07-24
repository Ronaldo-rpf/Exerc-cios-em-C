#include <stdio.h>
#include <stdlib.h>

int main () {
    int mat[8][8], i, j;

    for (i=0; i<8; i++){
        for (j=0; j<8; j++){
            mat[i][j] = i+1;
        }
    }
    for (i=0; i<8; i++){
        for (j=0; j<8; j++){
            if (i == j){
                for (j++ ; j<8; j++){
                    mat[i][j] = 0;
                }
            }
        }
    }

    for (i=0; i<8; i++){
        for (j=0; j<8; j++){
            printf ("mat[%d][%d] = %d\n", i, j, mat[i][j]);
        }
    }

    system ("pause");
    return 0;
}
