#include <stdio.h>
#include <stdlib.h>
int fibo (int);

int main () {
    int num, proximo;
    printf ("Numero :");
    scanf ("%d", &num);
    proximo = fibo (num);
    printf ("Valor da sequencia de Fibonacci mais proximo por acrescimo: %d\n\n", proximo);

    system ("pause");
    return 0;
}

int fibo (int num){
    int i, j, k;
    for (i=1, j=0; k < num;){
        k = i + j;
        j = i;
        i = k;
        printf ("%d\n", k);
    }
    return k;
}
