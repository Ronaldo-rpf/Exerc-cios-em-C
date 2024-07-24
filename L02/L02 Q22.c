#include <stdio.h>
#include <stdlib.h>

int main () {
    int num1, part1, part2, part3;
    printf ("Digite um numero de quatro digitos: ");
    scanf ("%d", &num1);
    if (num1<1000 || num1>9999) {
        printf ("Esse numero nao tem quatro digitos.\n");
    }

    part1 = num1 / 100;
    part2 = num1 % 100;
    part3 = part1 + part2;

    if (num1>=1000 && num1<10000 && num1 == part3*part3) {
        printf("Esse numero possui essa propriedade.\n");
    }
    if (num1>=1000 && num1<10000 && num1 != part3*part3) {
        printf("Esse numero NAO possui essa propriedade.\n");
    }



    system ("pause");
    return 0;
}
