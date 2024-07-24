#include <stdio.h>
#include <stdlib.h>
void digitos_in (int);

int main () {
    int num, invertido;
    printf ("Digite um numero: ");
    scanf ("%d", &num);

    digitos_in (num);

    system ("pause");
    return 0;
}

void digitos_in (int num){
    int invertido, aux, numBase, qntd;
    numBase = num;
    for (qntd=0, aux=0; aux!=0; qntd++){
        aux = num / 10;
        num = num % 10;
    }
    num = numBase;
    for (;num > num/10*qntd; num/=10){
        printf ("%d", num%10);
    }
    printf ("\n\n");
    return;
}
