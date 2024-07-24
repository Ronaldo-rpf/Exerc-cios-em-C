#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int num, bin, alg = 0, valor = 0, ordem;
    printf("Digite um numero binario.\n");
    scanf ("%d", &bin);
    num = bin;
    while (num != 0){
        alg += 1;
        num /= 10;
    }
    ordem = 0;
    while (bin != 0){
        num = bin % 10;
        valor += num * pow(2, ordem);
        ordem++;
    }


    printf ("%d", valor);

    system ("pause");
    return 0;
}
