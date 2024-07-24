#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int num, numero, alg, pri, ult, dez;
    printf ("Digite um numero: ");
    scanf ("%d", &numero);
    num = numero;
    dez = 10;
    while (num % 10 != 0){
        alg += 1;
        num /= 10;
    }
    num = numero;
    while (alg != 0){
        pri = num / dez;
        ult = num / pow(10,alg);
        if (pri == ult){
            while (pri==ult){
                alg--;
                pri = num / dez*10;
                ult = num / pow(10,alg);
            }
            printf ("Esse numero nao e palindromo.\n");
        }
        else {
            printf ("Esse numero nao e palindromo.\n");
            alg = 0;
        }
        alg=0;
    }




    printf ("%d\n", alg);

    system ("pause");
    return 0;
}
