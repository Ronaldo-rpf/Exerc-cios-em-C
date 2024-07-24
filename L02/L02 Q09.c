#include <stdio.h>
#include <stdlib.h>

int main (){
    int num1, a, b, c, d;
    printf ("escreva um numero inteiro: ");
    scanf ("%d", &num1);

    if (num1<9999 || num1>99999) {
            printf ("Este numero nao tem 5 digitos!!!\n");
            system ("pause");
            return 0;
    }

    if (9999<num1<10000){
        a = num1 / 10000;
        num1 = num1%10000;
        b = num1 / 1000;
        num1 = num1 % 1000;
        c = num1 / 100;
        num1 = num1 %100;
        d =  num1 / 10;
        num1 = num1 % 10;

        printf ("%d   %d   %d   %d   %d\n", a, b, c, d, num1);
    }



    system ("pause");
    return 0;
}
