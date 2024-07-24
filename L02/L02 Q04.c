#include <stdio.h>
#include <stdlib.h>

int main (){
    int raio, diametro, circunferencia, area;

    printf ("Digite o raio do circulo: ");
    scanf ("%d", &raio);

    diametro = raio*2;
    circunferencia = 2*3.14*raio;
    area = 3.14*raio*raio;

    printf ("Diametro: %d \nCircunferencia: %d \nArea: %d\n", diametro, circunferencia, area);

    system ("pause");
    return 0;
}
