#include <stdio.h>
#include <stdlib.h>

int main () {
    float massa, massa_inicial;
    int segundos = 0, minutos = 0, horas = 0;

    printf ("Massa inicial do material radioativo em gramas: ");
    scanf ("%f", &massa_inicial);
    massa = massa_inicial;
    while (massa > 0.5){
        massa /= 2;
        segundos += 50;
    }
    if (segundos >= 60){
        minutos = segundos / 60;
        segundos %= 60;
        if (minutos >= 60){
            horas = minutos / 60;
            minutos %= 60;
        }
    }

    printf ("\nMassa incial: %.2f\nMassa final: %f\nTempo: %d: %d: %d \n\n", massa_inicial, massa, horas, minutos, segundos);




    system ("pause");
    return 0;
}
