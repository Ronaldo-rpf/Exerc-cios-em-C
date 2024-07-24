#include <stdio.h>
#include <stdlib.h>

int main () {
    int mat[4][4], i, j, aux[4];

    for (i=0; i<4; i++){
        for (j=0; j<4; j++){
            mat[i][j] = i;
        }
    }

    for (i=0; i<4; i++){
        aux[i] = mat[0][i];
    }
    for (i=0; i<4; i++){
        mat[0][i] = mat[i][3];
    }
    for (i=0; i<4; i++){
        if (i != 0)
            mat[i][3] = aux[i];
    }

    for (i=0; i<4; i++){
        for (j=0; j<4; j++){
            printf ("mat[%d][%d] = %d\n", i, j, mat[i][j]);
        }
    }




    system ("pause");
    return 0;
}
