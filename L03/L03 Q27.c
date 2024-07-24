#include <stdio.h>
#include <stdlib.h>

int main () {
    int hip, cat1, cat2;

    printf ("Valores da hipotenusa, cateto 1 e cateto 2, respectivamente:\n");

    for (hip=1; hip<=500; hip++){
        for (cat1=1; cat1<=500; cat1++){
            for (cat2=1; cat2<=500; cat2++){
                if (hip*hip == cat1*cat1 + cat2*cat2 && hip < cat1 + cat2){
                    printf ("%d %d %d\n\n", hip, cat1, cat2);
                }
            }
        }
    }








    system ("pause");
    return 0;
}
