#include <stdio.h>
#include <stdlib.h>

int main () {
    int qntd, num1, num2, num3, maior, menor;

    printf ("Quantos valores tera a sua lista?\n");
    scanf ("%d", &qntd);

    if (qntd==0){
        printf ("Invalido.\n");

        system ("pause");
        return 0;
    }
    if (qntd==1){
        printf("Digite os valores:\n");
        scanf ("%d", &num1);
        printf("O maior valor da lista e:\n%d\n", num1);

        system ("pause");
        return 0;
    }

    printf("Digite os valores:\n");
    scanf ("%d", &num1);
    printf("Digite os valores:\n");
    scanf ("%d", &num2);
    if (num1>num2){
        maior = num1;
        menor = num2;
    }
    if (num1<num2){
        maior = num2;
        menor = num1;
    }


    while (qntd > 2){
        printf("Digite os valores:\n");
        scanf ("%d", &num3);
        if (num3 < menor){
            menor = num3;
        }
        if (num3 > maior){
            maior = num3;
        }
        qntd--;
    }

    printf ("O maior valor dessa lista e:\n%d\n\nE o menor valor dessa lista e:\n%d\n", maior, menor);

    system ("pause");
    return 0;
}
