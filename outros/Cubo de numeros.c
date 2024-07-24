#include <stdio.h>
#include <stdlib.h>
int quadrado (int a);
int cubo (int a);

int main (){
    int posicao, produto, aux = 1;

    printf ("Quer o cubo ate qual numero? ");
    scanf ("%d", &posicao);

    while (aux <= posicao){
        produto = cubo (aux);
        printf ("%8d ", produto);
        if (aux % 5 == 0){
            printf ("\n");
        }
        aux++;
    }
    printf ("\n");

    system ("pause");
    return 0;
}

int quadrado (int aux){
    aux *= aux;
    return aux;
}

int cubo (int aux){
    return quadrado(aux) * aux;
}
