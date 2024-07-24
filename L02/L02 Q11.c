#include <stdio.h>
#include <stdlib.h>

int main () {
    int num;
    printf ("Digite um numero: ");
    scanf ("%d", &num);

    printf ("\nDecimal: %f \nOctal: %o \nHexadecimal: %x \n", num, num, num);



    system ("pause");
    return 0;
}
