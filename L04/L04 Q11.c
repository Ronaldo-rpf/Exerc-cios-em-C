#include <stdio.h>
#include <stdlib.h>
void horas (int);

int main () {
    int seg;
    printf ("Horario do dia em segundos: ");
    scanf ("%d", &seg);
    if (seg >= 0 && seg <= 86400){
        horas (seg);
    }
    else{
        printf ("Hora invalida.\n\n");
        system ("pause");
        return 0;
    }


    system ("pause");
    return 0;
}

void horas (int seg){
    int min, h, s;
    min = seg / 60;
    s = seg % 60;
    h = min / 60;
    min %= 60;
    printf ("%d:%d:%d\n\n", h, min, s);
    return;
}
