#include <stdio.h>
#include <stdlib.h>
int perfeito (int);

int main () {
    int num, res;
    for (num=0; num <=100; num++){
        res = perfeito (num);
        if (res == 1){
            printf ("%d\n", num);
        }
    }


    system ("pause");
    return 0;
}

int perfeito (int numero){
    int a, resposta, aux2=0, aux3=0, aux5=0, aux7=0, aux11=0, aux13=0, aux17=0, aux19=0, aux23=0, aux29=0;
    a = numero;
    if (numero % 2 == 0){
        for (aux2 = 0; numero % 2 == 0; aux2++){
            numero /= 2;
        }
    }
    if (numero % 3 == 0){
        for (aux3=0; numero % 3 == 0; aux3++){
            numero /= 3;
        }
    }
    if (numero % 5 == 0){
        for (aux5=0; numero % 5 == 0; aux5++){
            numero /= 5;
        }
    }
    if (numero % 7 == 0){
        for (aux7=0; numero % 7 == 0; aux7++){
            numero /= 7;
        }
    }
    if (numero % 11 == 0){
        for (aux11=0; numero % 11 == 0; aux11++){
            numero /= 11;
        }
    }
    if (numero % 13 == 0){
        for (aux5=13; numero % 13 == 0; aux13++){
            numero /= 13;
        }
    }
    if (numero % 17 == 0){
        for (aux5=17; numero % 17 == 0; aux17++){
            numero /= 17;
        }
    }
    if (numero % 19 == 0){
        for (aux5=19; numero % 19 == 0; aux19++){
            numero /= 19;
        }
    }
    if (numero % 23 == 0){
        for (aux5=23; numero % 23 == 0; aux23++){
            numero /= 23;
        }
    }
    if (1 + aux2*2 + aux3*3 + aux5*5 + aux7*7 + aux11*11 + aux13*13 + aux17*17 + aux19*19 + aux23*23 == a){
        resposta = 1;
    }
    else{
        resposta = 0;
    }
    return resposta;
}
