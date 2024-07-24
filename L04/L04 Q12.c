#include <stdio.h>
#include <stdlib.h>
int fatorial (int);

int main () {
    int n, aux;
    printf ("Digite o valor de n: ");
    scanf ("%d", &n);

    for (int i=1; i<=n; i++){
        aux = fatorial (i);
        printf ("%d\n", aux);
    }

    system ("pause");
    return 0;
}

int fatorial (int fat){
    int i;
    for (i=1; fat != 0; fat--){
        i *= fat;
    }
    return i;
}
