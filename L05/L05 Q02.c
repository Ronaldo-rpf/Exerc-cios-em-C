#include <stdio.h>
#include <stdlib.h>

int main () {
    int vet[10], impar=0, i=0, num=0;
    while (impar<10){
        if (num % 2 == 1){
            vet[impar] = num;
            impar++;
        }
        num++;
    }
    for (i=0; i<10; i++){
        printf ("Vet[%d] = %d\n", i, vet[i]);
    }


    system ("pause");
    return 0;
}
