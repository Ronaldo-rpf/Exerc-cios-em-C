#include <stdio.h>
#include <stdlib.h>

int main () {
    int num, fatorial = 1;

    printf ("Digite um numero: ");
    scanf ("%d", &num);

    if (num == 1){
        printf ("Fatorial: 1\n");
        system ("pause");
        return 0;
    }
    if (num == 0){
        printf ("Fatorial: 1\n");
        system ("pause");
        return 0;
    }

    while (num > 1){
        fatorial *= num;
        num--;
    }


    printf ("Fatorial: %d\n", fatorial);





    system ("pause");
    return 0;
}
