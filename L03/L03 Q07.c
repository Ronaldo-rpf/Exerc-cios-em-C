#include <stdio.h>
#include <stdlib.h>

int main () {
    int cont = 1, maior, num, maior2;
    printf ("Escreva o primeiro numero:\n");
    scanf ("%d", &maior);

    printf ("Digite o proximo numero:\n");
    scanf ("%d", &maior2);

    while (cont != 10){
        printf ("Digite o proximo numero:\n");
        scanf ("%d", &num);

        if (num > maior){
            maior2 = maior;
            maior = num;
        }
        if (num > maior2 && num < maior){
            maior2 = num;
        }
        cont++;
    }


    printf ("O 2 maiores numeros desses 10 sao esses:\n%d e %d\n\n", maior, maior2);




    system ("pause");
    return 0;
}
