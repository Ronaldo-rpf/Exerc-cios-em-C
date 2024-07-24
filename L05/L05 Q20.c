#include <stdio.h>
#include <stdlib.h>

int main () {
    int matriz[20][20] = {1, 2, 2, 3, 25, 31, 44}, i, j, valor, aux = 0;

    printf ("Digite um valor a ser buscado na matriz: ");
    scanf ("%d", &valor);

    for (i=0; i<20; i++){
        for (j=0; j<20; j++){
            if (matriz[i][j] == valor){
                printf ("Valor encontrado na localizacao: linha %d coluna %d\nou seja, matriz[%d][%d]\n\n", i, j, i, j);
                aux = 1;
            }
        }
    }
    if (aux == 0)
        printf ("Valor nao encontrado na matriz.\n\n");


    system ("pause");
    return 0;
}
