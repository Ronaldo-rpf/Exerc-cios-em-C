#include <stdio.h>
#include <stdlib.h>

int main (){
    int num;

    printf ("Digite um numero qualquer: ");
    scanf ("%d", &num);

    if (num%2 == 0) {
        printf ("Este numero e par.\n");
    }
    if (num % 2 != 0) {
        printf ("Este numero e impar.\n");
    }




    system ("pause");
    return 0;
}
