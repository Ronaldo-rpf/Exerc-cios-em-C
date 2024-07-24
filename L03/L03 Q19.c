#include <stdio.h>
#include <stdlib.h>

int main () {
    float qntd, contador, media, soma = 0, valores;
    printf ("Quantos valores serao digitados?\n");
    scanf ("%f", &qntd);

    if (qntd == 0){
        printf ("Invalido.\n");
        system ("pause");
        return 0;
    }

    contador = qntd;
    while (contador!=0){
        printf ("Digite os valores:\n");
        scanf ("%f", &valores);
        soma += valores;
        contador--;
    }
    media = soma / qntd;

    printf ("A media desses valores e:\n%f\n", media);




    system ("pause");
    return 0;
}
