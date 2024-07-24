#include <stdio.h>
#include <stdlib.h>

int main () {
    float salario_gerente = 2500, horas, salario_h, salario, vendas, itens;
    int n;

    printf ("Digite seu codigo de pagamento (1 a 4, -1 para sair): ");
    scanf ("%d", &n);

    while (n != -1){
        switch(n){
            case 1:
                printf ("Gerente\nSalario: %f\n\n", salario_gerente);
                break;
            case 2:
                printf ("Horas trabalhadas: ");
                scanf ("%f", &horas);
                printf ("Salario por hora: ");
                scanf ("%f", &salario_h);
                if (horas > 40){
                    salario = (40 * salario_h) + (horas - 40) * (salario_h * 1,5);
                }
                else{
                    salario = horas * salario_h;
                }
                printf ("Trabalhador comum\nSalario: %f\n\n", salario);
                break;
            case 3:
                printf ("Vendas brutas: ");
                scanf ("%f", &vendas);
                salario = 250 + 5.7/100 * vendas;
                printf ("Trabalhador por comissao\nSalario: %f\n\n", salario);
                break;
            case 4:
                printf ("Itens produzidos: ");
                scanf ("%f", &itens);
                salario = 50 * itens;
                printf ("Trabalhador por empreitada\nSalario: %f\n\n", salario);
                break;
            default:
                printf ("O numero deve ser de 1 a 4.\n\n");
        }

        printf ("Digite seu codigo de pagamento (1 a 4, -1 para sair): ");
        scanf ("%d", &n);

    }



    system ("pause");
    return 0;
}
