#include <stdio.h>
#include <stdlib.h>

int main () {
    int matriz[8][8], i, j, maior=0, soma=0;

    for(i=0; i<8; i++){
        for(j=0; j<8; j++){
            matriz[i][j] = i+1;
        }
    }

    for(i=0; i<8; i++){
        for(j=0; j<8; j++){
            if (i==j && matriz[i][j] > maior){
                maior = matriz[i][j];
            }
        }
    }
    for(i=0; i<8; i++){
        for(j=0; j<8; j++){
            if (i+j==8-1){
                soma += matriz[i][j];
            }
        }
    }
    printf ("Maior da diagonal principal: %d\nSoma da diagonal secundaria: %d\n\n", maior, soma);


    system ("pause");
    return 0;
}
