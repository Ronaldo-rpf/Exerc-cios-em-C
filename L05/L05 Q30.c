#include <stdio.h>
#include <stdlib.h>

int main () {
    char mat[100][10], gab[10] = {'b', 'c', 'd', 'a', 'a', 'b', 'd', 'c', 'c', 'd'};
    int i, j, resultado[100] = {}, aux;
    for (i=0; i<100; i++){
        for (j=0; j<10; j++){
            mat[i][j] = 'a';
        }
    }
    for (i=0; i<100; i++){
        for (j=0; j<10; j++){
            if (mat[i][j] == gab[j]){
                resultado[i] += 1;
            }
        }
    }

    for (i=0, aux=1; i<100, aux<=100; i++, aux++){
        printf ("Aluno numero %d: nota: %d\n", aux, resultado[i]);
    }







    system ("pause");
    return 0;
}
