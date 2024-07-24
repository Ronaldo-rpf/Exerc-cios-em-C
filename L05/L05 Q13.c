#include <stdio.h>
#include <stdlib.h>

int main () {
    int v[10] = {4,2,3,4,5,5,6,6,7,20}, i, j, aux[10] = {};
    for (i=0; i<10; i++){
        for (j=0; j<10; j++){
            if(v[i] == v[j] && i != j){
                aux[i] = v[j];
            }
        }
    }

    for (i=0; i<10; i++){
        if (aux[i] != 0){
            printf("Valor repetido: %d\n", aux[i]);
        }
    }

    system ("pause");
    return 0;
}
