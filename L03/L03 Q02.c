#include <stdio.h>
#include <stdlib.h>

int main () {
    int num_conta, saldo_inicial, cobrancas, creditos, limite_credito, novo_saldo;

    printf ("Entre com o numero da conta (0 para finalizar): ");
    scanf ("%d", &num_conta);

    while (num_conta != 0){
        printf ("Entre com o saldo inicial: ");
        scanf ("%d", &saldo_inicial);
        printf ("Entre com o total de cobrancas: ");
        scanf ("%d", &cobrancas);
        printf ("Entre com o total de creditos: ");
        scanf ("%d", &creditos);
        printf ("Entre com o limite de credito: ");
        scanf ("%d", &limite_credito);

        novo_saldo = saldo_inicial + cobrancas - creditos;

        if (novo_saldo > limite_credito) {
            printf ("Conta: %d \nLimite de credito: %d\nSaldo: %d\nLIMITE DE CREDITO EXCEDIDO!\n\n", num_conta, limite_credito, saldo_inicial);
        }

        printf ("Entre com o numero da conta (0 para finalizar): ");
        scanf ("%d", &num_conta);

    }



    system ("pause");
    return 0;
}
