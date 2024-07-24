#include <stdio.h>
#include <stdlib.h>

int main () {
    int i, j;
    float vet[50], mat[50][2];
    for (i=0; i<50; i++){
        for (j=0; j<2; j++){
            mat[i][j] = i+1;
        }
    }
    for (i=0; i<50; i++){
        for (j=0; j<1; j++){
            vet[i] = mat[i][j] * mat[i][j+1] / 2;
        }
    }
    for (i=0; i<50; i++){
        printf ("vet[%d] = %f\n", i, vet[i]);
    }



    system ("pause");
    return 0;
}
