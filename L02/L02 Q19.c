#include <stdio.h>
#include <stdlib.h>

int main () {
    float liquido, bruto, contribuicao;

    printf ("Digite o seu salario bruto: ");
    scanf ("%f", &bruto);

    if (bruto <= 4236) {
        contribuicao = bruto*2/25;
        liquido = bruto - contribuicao;
        printf ("Contribuicao ao INSS: %.2f \nSalario Liquido: %.2f\n", contribuicao, liquido);
    }
    if (bruto > 4236) {
        contribuicao = bruto*1/10;
        liquido = bruto - contribuicao;
        printf ("Contribuicao ao INSS: %.2f \nSalario Liquido: %.2f\n", contribuicao, liquido);
    }




    system ("pause");
    return 0;
}
