#include <stdio.h>
#include <stdlib.h>
float desconto (int, float);

int main () {
    int qntd;
    float preco_final, preco;
    printf ("Quantidade do produto: ");
    scanf ("%d", &qntd);
    printf ("Preco do produto: ");
    scanf ("%f", &preco);
    preco_final = desconto (qntd, preco);
    printf ("Preco final: %f\n\n", preco_final);

    system ("pause");
    return 0;
}

float desconto (int qntd, float preco){
    preco *= qntd;
    if (qntd > 6 && qntd <= 12){
        preco = preco - preco*4/100;
        return preco;
    }
    if (qntd > 12){
        preco = preco - preco*12/100;
        return preco;
    }
    else{
        return preco;
    }
}
