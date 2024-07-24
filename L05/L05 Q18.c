#include <stdio.h>
#include <stdlib.h>

int main () {
    int mat1[4][4] = {25, 26, 27, 28, 1}, mat2[4][4], mat3[4][4], i, j;
    for (i=0; i<4; i++){
        for (j=0; j<4; j++){
            mat2[i][j] = i;
        }
    }
    for (i=0; i<4; i++){
        for (j=0; j<4; j++){
            if (mat1[i][j] > mat2[i][j])
                mat3[i][j] = mat1[i][j];
            else
                mat3[i][j] = mat2[i][j];
        }
    }
    for (i=0; i<4; i++){
        for (j=0; j<4; j++){
            printf("mat3[%d][%d] = %d\n", i, j, mat3[i][j]);
        }
    }


    system ("pause");
    return 0;
}
