#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float hipotenusa (float, float);

int main () {
    float cateto1, cateto2, hip;
    printf ("Cateto a: ");
    scanf ("%f", &cateto1);
    printf ("Cateto b: ");
    scanf ("%f", &cateto2);

    hip = hipotenusa (cateto1, cateto2);

    printf ("Hipotenusa = %.2f\n\n", hip);


    system ("pause");
    return 0;
}

float hipotenusa (float cateto1, float cateto2){
    return sqrt(cateto1*cateto1 + cateto2*cateto2);
}
