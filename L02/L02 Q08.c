#include <stdio.h>
#include <stdlib.h>

int main (){
    int num1, num2, maior, menor;
    printf ("Digite dois numeros: \n");
    scanf ("%d %d", &num1, &num2);

    if (num1>num2) {
        maior = num1;
        menor = num2;
    }
    if (num1<num2) {
        maior = num2;
        menor = num1;
    }

    if (maior % menor != 0){
        printf("%d nao e multiplo de %d.\n", maior, menor);
    }
    if (maior % menor == 0) {
        printf ("%d e multiplo de %d\n", maior, menor);
    }



    system ("pause");
    return 0;
}
