#include <stdio.h>
#include <stdlib.h>

int main () {
    int vet[20], i, num, pos;
    for (i=0; i<20; i++){
        vet [i] = i;
    }
    printf ("Digite um valor: ");
    scanf ("%d", &num);

    for (i=0, pos=0; i<20; pos++, i++){
        if (vet[i]==num){
            printf ("Valor encontrado na posicao %d do vetor.\n\n", pos);
            system ("pause");
            return 0;
        }
    }
    printf ("Valor nao encontrado no vetor.\n\n");


    system ("pause");
    return 0;
}
