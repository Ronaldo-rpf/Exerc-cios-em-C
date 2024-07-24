#include <stdio.h>
#include <stdlib.h>

int main () {
    float hora_total, hora_normal, salario01, salario02, salario_final;

    printf ("Horas trabalhadas (-1 para finalizar): ");
    scanf ("%f", &hora_total);

    while (hora_total != -1){
        printf ("Valor da hora normal do trabalhador: ");
        scanf ("%f", &hora_normal);

        if (hora_total > 40) {
            salario01 = (hora_total - 40) * (1.5 * hora_normal);
            salario02 = (40 * hora_normal);
            salario_final = (salario01 + salario02);
            printf ("Salario: $%f\n\n", salario_final);
        }
        else {
            salario_final = hora_total * hora_normal;
            printf ("Salario: $%f\n\n", salario_final);
        }
        printf ("Horas trabalhadas (-1 para finalizar): ");
        scanf ("%f", &hora_total);
    }





    system ("pause");
    return 0;
}
