#include <stdio.h>
#include <stdlib.h>

int main () {
    float cel, far;
    printf("Digite a temperatura em Celsius: ");
    scanf ("%f", &cel);

    far = ((cel*9) / 5) + 32;

    printf("Temperatura em Farenrait: %.2f\n", far);




    system ("pause");
    return 0;
}
