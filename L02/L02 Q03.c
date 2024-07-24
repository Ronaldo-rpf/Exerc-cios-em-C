#include <stdio.h>
#include <stdlib.h>

int main (){
    int num1, num2, num3, soma, media, produto, menor, maior;

    printf ("Digite tres numeros: \n");
    scanf ("%f %f %f", &num1, &num2, &num3);
    soma = num1 + num2 + num3;
    media = soma/3;
    produto = num1*num2*num3;

    if (num1>num2) {
        maior=num1;
        maior=num2;
    }
    if (num1<num2) {
        maior = num2;
        menor = num1;
    }
    if (num3>maior){
        maior = num3;
    }
    if (num3<menor) {
        menor = num3;
    }

    printf ("Soma: %f \nMedia: %f \nProduto: %f \nMenor: %f \nMaior: %f\n", soma, media, produto, menor, maior);



    system ("pause");
    return 0;
}
