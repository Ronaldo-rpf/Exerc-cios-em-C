#include <stdio.h>
#include <stdlib.h>

int main (){
    int num1, num2;

    printf ("Digite dois numeros quaisquer: ");
    scanf ("%d %d", &num1, &num2);
    if (num1 > num2) {
        printf ("%d e maior do que %d \n", num1, num2);
    }
    if (num1 < num2){
        printf ("%d e maior do que %d", num2, num1);
    }
    if (num1 == num2) {
        printf ("Estes numeros sao iguais. \n");
    }

    system ("pause");
    return 0;
}
