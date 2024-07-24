#include <stdio.h>
#include <stdlib.h>

int main () {
    float num1, num2, soma, subtracao, multiplicacao, divisao;
    int operacao;

    printf ("Digite dois numeros: \n");
    scanf ("%f %f", &num1, &num2);

    printf ("\tQual operacao deseja fazer?\n\tAdicao: 1\n\tSubtracao: 2\n\tMultiplicacao: 3\n\tDivisao: 4\n\n");
    scanf ("%d", &operacao);

    if (operacao > 4 || operacao < 1){
        printf ("Erro.\n");
    }

    if (operacao == 1){
        soma = num1 + num2;
        printf ("Soma : %.2f\n\n", soma);
    }

    if (operacao == 2){
        subtracao = num1 - num2;
        printf ("Subtracao : %.2f\n\n", subtracao);
    }

    if (operacao == 3){
        multiplicacao = num1 * num2;
        printf ("Multiplicacao : %.2f\n\n", multiplicacao);
    }

    if (operacao == 4){
        divisao = num1 / num2;
        printf ("Divisao : %.2f\n\n", divisao);
    }



    system ("pause");
    return 0;
}
