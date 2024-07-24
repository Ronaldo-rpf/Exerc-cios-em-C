#include <stdio.h>
#include <stdlib.h>

int main () {
    int mat[5][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25}, i, j, aux[5], aux1=0, aux2[5];

    for (i=0; i<5; i++){
        for (j=0; j<5; j++){
            if (i+j == 5-1){
                aux[i] = mat[i][j];
            }
        }
    }
    for (i=0; i<5; i++){
        for (j=0; j<5; j++){
            if (i == j){
                aux2[i] = mat[i][j];
            }
        }
    }
    for (i=0; i<5; i++){
        for (j=0; j<5; j++){
            if (i == j){
                mat[i][j] = aux[i];
            }
        }
    }
    for (i=0; i<5; i++){
        for (j=0; j<5; j++){
            if (i+j == 5-1){
                mat[i][j] = aux2[i];
            }
        }
    }

    for (i=0; i<5; i++){
        for (j=0; j<5; j++){
            printf ("%4d", mat[i][j]);
            aux1++;
            if(aux1==5){
                printf("\n");
                aux1=0;
            }
        }
    }



    system ("pause");
    return 0;
}
