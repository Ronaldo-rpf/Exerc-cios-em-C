#include <stdio.h>
#include <stdlib.h>

int main () {
    float emprestimo, taxa, dias, juros, total;

    printf ("Entre com o valor do emprestimo (0 para finalizar): ");
    scanf ("%f", &emprestimo);

    while (emprestimo != 0) {
        printf ("Entre com o valor da taxa de juros: ");
        scanf ("%f", &taxa);
        printf ("Entre com os dias de emprestimo: ");
        scanf ("%f", &dias);

        juros = emprestimo*taxa*dias/365;
        total = juros + emprestimo;

        printf ("O valor do juros e: %.3f\n", juros);
        printf ("O total a pagar e: %.3f\n\n", total);

        printf ("Entre com o valor do emprestimo (0 para finalizar): ");
        scanf ("%f", &emprestimo);
    }





    system ("pause");
    return 0;
}
