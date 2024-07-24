#include <stdio.h>
#include <stdlib.h>

int main (){
    int n, reset, denom = 3, pares, impares;
    float pi = 4, pi2 = 0;

    printf ("Quantos termos tera a serie de pi?\n");
    scanf ("%d", &n);
    reset = n;
    if (n==1){
        printf ("pi sera: 4\n");
        system ("pause");
        return 0;
    }
    if (n % 2 == 0){
        while (n>=2){
            pi += -4/denom;
            denom += 4;
            n -= 2;
        }
        n = reset - 1;
        denom = 5;
        while (n>1){
            pi2 += 4/denom;
            denom += 4;
            n -= 2;
        }
        pi = pi + pi2;
    }
    else{
        denom = 5;
        while (n>1){
            pi2 += 4/denom;
            denom += 4;
            n -= 2;
        }
        n = reset - 1;
         while (n>=2){
            pi += -4/denom;
            denom += 4;
            n -= 2;
        }
        pi = pi + pi2;
    }


    printf ("pi sera: %f\n", pi);


    system ("pause");
    return 0;
}
