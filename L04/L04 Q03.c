#include <stdio.h>
#include <stdlib.h>
int multiplo (int, int);

int main () {
    int num1, num2, cond;
    printf ("Primeiro Numero (-1 para sair): ");
    scanf ("%d", &num1);

    while (num1 != -1){
        printf ("Segundo Numero: ");
        scanf ("%d", &num2);

        cond = multiplo (num1, num2);
        if (cond == 1){
            printf ("%d e multiplo de %d.\n\n", num2, num1);
        }
        else {
            printf ("Esses numeros nao sao multiplos.\n\n");
        }

        printf ("Primeiro Numero (-1 para sair): ");
        scanf ("%d", &num1);
    }


    system ("pause");
    return 0;
}

int multiplo (int num1, int num2){
    int aux;
    if (num2 % num1 == 0){
        aux = 1;
    }
    else {
        aux = 0;
    }
    return aux;
}
