#include <stdio.h>
#include <stdlib.h>

int main () {
    int mat[10][10], mat2[10][10], aux[12], aux2[12], aux3=0, i, j;
    for (i=0; i<10; i++){
        for (j=0; j<10; j++){
            mat[i][j] = i+1;
        }
    }
    for (i=0; i<10; i++){
        for (j=0; j<10; j++){
            mat2[i][j] = j;
        }
    }
    for (i=0; i<10; i++){
        for (j=0; j<10; j++){
            if (i == j){
                aux[i] = mat[i][j];
            }
        }
    }
    for (i=0; i<10; i++){
        for (j=0; j<10; j++){
            if (i+j == 10-1){
                aux2[i] = mat2[i][j];
            }
        }
    }
    for (i=0; i<10; i++){
        for (j=0; j<10; j++){
            if (i == j){
                mat[i][j] = aux2[i];
            }
        }
    }
    for (i=0; i<10; i++){
        for (j=0; j<10; j++){
            if (i+j == 10-1){
                mat2[i][j] = aux[i];
            }
        }
    }

    for (i=0; i<10; i++){
        for (j=0; j<10; j++){
            printf ("%5d", mat[i][j]);
            aux3++;
            if (aux3 == 10){
                printf("\n");
                aux3=0;
            }
        }
    }
    printf ("\n\n\n");
    for (i=0; i<10; i++){
        for (j=0; j<10; j++){
            printf ("%5d", mat2[i][j]);
            aux3++;
            if (aux3 == 10){
                printf("\n");
                aux3=0;
            }
        }
    }


    system ("pause");
    return 0;
}
