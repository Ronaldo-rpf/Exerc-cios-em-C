#include <stdio.h>
#include <stdlib.h>

int main(){
    float cliente = 3, conta, limite, novo_limite, saldo, limite_final;

    while (cliente != 0){
        printf ("Numero da conta:\n");
        scanf ("%f", &conta);
        printf ("Limite anterior:\n");
        scanf ("%f", &limite);
        printf ("Saldo atual:\n");
        scanf ("%f", &saldo);

        novo_limite = limite / 2;
        if (novo_limite < saldo){
            printf ("Seu saldo excede seu novo limite de credito.\n\n");
        }
        else {
            limite_final = novo_limite - saldo;
            printf ("%f e o seu novo limite, e %f e o que sobrou dele.\n\n", novo_limite, limite_final);
        }
        cliente--;
    }


    system ("pause");
    return 0;
}
