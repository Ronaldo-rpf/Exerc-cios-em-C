#include <stdio.h>
#include <stdlib.h>

int main () {
    int num, pot = 10, algarismo, numeros_7 = 0;

    printf ("Digite um numero: ");
    scanf ("%d", &num);


    while (num != 0){
        algarismo = num % pot;
        num /= pot;
        if (algarismo == 7){
            numeros_7 += 1;
        }
    }
    printf ("Esse numero possui %d numero(s) 7.\n\n", numeros_7);


    system ("pause");
    return 0;
}
