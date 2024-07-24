#include <stdio.h>
#include <stdlib.h>

int main () {
    int salario, comissao, vendas_brutas;

    printf ("Entre com a venda bruta (-1 para finalizar): ");
    scanf ("%d", &vendas_brutas);

    while (vendas_brutas != -1) {
        salario = 200 + 9*vendas_brutas/100;
        printf ("Salario da semana: %d\n\n", salario);

        printf ("Entre com a venda bruta (-1 para finalizar): ");
        scanf ("%d", &vendas_brutas);
    }





    system ("pause");
    return 0;
}
