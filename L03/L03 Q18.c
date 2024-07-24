#include <stdio.h>
#include <stdlib.h>

int main () {
    int qntd, soma = 0, valor;

    printf ("Quantos valores serao fornecidos?\n");
    scanf ("%d", &qntd);

    while (qntd!=0){
        printf ("Digite os valores: \n");
        scanf ("%d", &valor);
        soma += valor;
        qntd--;
    }

    printf ("A soma dessa sequencia de numeros e:\n%d\n", soma);





    system ("pause");
    return 0;
}
