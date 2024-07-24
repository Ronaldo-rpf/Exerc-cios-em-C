#include <stdio.h>
#include <stdlib.h>

int main (void){
    int num1, num2, soma, diferenca, produto, quociente, resto;

    printf ("Digite um numero inteiro: ");
    scanf ("%d", &num1);
    printf ("Digite um outro numero inteiro: ");
    scanf ("%d", &num2);

    soma = num1 + num2;
    diferenca = num1 - num2;
    produto = num1 * num2;
    quociente = num1 / num2;
    resto = num1 % num2;

    printf ("Resultados: \n Soma: %d \n Diferenca: %d \n Produto: %d \n Quociente: %d \n Resto: %d \n",
            soma, diferenca, produto, quociente, resto);

    system ("PAUSE");
    return 0;
}
