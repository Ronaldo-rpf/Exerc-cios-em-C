#include <stdio.h>
#include <stdlib.h>

int main () {
    int vetor[12], i, pos1, pos2;
    for (i = 0; i < 12; i++){
        vetor[i] = i;
    }
    printf ("Digite duas posicoes do vetor:\n");
    scanf ("%d %d", &pos1, &pos2);
    if (pos1 > 11 || pos1 < 0){
        printf ("Error: posicao invalida.\n");
        system ("pause");
        return 0;
    }
    else if (pos2 > 11 || pos2 < 0){
        printf ("Error: posicao invalida.\n");
        system ("pause");
        return 0;
    }
    else {
        printf ("Soma: %d\n\n", vetor[pos1] + vetor[pos2]);
    }

    system ("pause");
    return 0;
}
