#include <stdio.h>
#include <stdlib.h>

int main () {
    int cont = 1, maior, num;
    printf ("Escreva o primeiro numero:\n");
    scanf ("%d", &maior);

    while (cont != 10){
        printf ("Digite o proximo numero:\n");
        scanf ("%d", &num);
        if (num > maior){
            maior = num;
        }
        cont++;
    }


    printf ("O maior numero desses 10 e esse:\n%d\n\n", maior);




    system ("pause");
    return 0;
}
