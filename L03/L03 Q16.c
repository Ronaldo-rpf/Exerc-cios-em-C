#include <stdio.h>
#include <stdlib.h>

int main () {
    int contador = 3, num, num1 = 1, num2 = 1, fib;

    printf ("Qual numero da sequencia de Fibonaci deseja ver?\n");
    scanf ("%d", &num);

    if (num == 1){
        printf ("\nEsse e o 1 numero da sequencia: \n0\n\n");
        system ("pause");
        return 0;
    }
    if (num == 2){
        printf ("\nEsse e o 2 numero da sequencia: \n1\n\n");
        system ("pause");
        return 0;
    }
    if (num == 3){
        printf ("\nEsse e o 3 numero da sequencia: \n1\n\n");
        system ("pause");
        return 0;
    }

    while (num != contador){
        fib = num1 + num2;
        num2 = num1;
        num1 = fib;
        contador++;
    }
    printf ("\nEsse e o %d numero da sequencia: \n%d\n\n", num, fib);




    system ("pause");
    return 0;
}
