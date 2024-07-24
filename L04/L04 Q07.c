#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int jogada (int, int);

int main () {
    int cont, res, cara=0, coroa=0;
    srand (time (NULL));

    for (cont=1; cont<=100; cont++){
        res = jogada (0, 1);
        if (res == 1){
            cara++;
        }
        else{
            coroa++;
        }
    }
    printf ("Cara: %d\n", cara);
    printf ("Coroa: %d\n\n", coroa);

    system ("pause");
    return 0;
}

int jogada (int a, int b){
    return a + rand() % (b-a+1);
}
