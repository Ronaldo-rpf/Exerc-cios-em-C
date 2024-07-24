#include <stdio.h>
#include <stdlib.h>
int fat (int);
float pot (float, int);
float ex (float, int);

int main (){
    float e, x;
    int n;

    printf ("Valor de x: ");
    scanf ("%f", &x);
    printf ("Valor de n: ");
    scanf ("%d", &n);

    e = ex(x, n);
    printf ("%f\n\n", e);

    system ("pause");
    return 0;
}

int fat (int cont){
    int i;
    for (i=1; cont!=0; cont--){
        i *= cont;
    }
    return i;
}

float pot (float x, int n){
    float pot = 1;
    for (;n!=0; n--){
        pot *= x;
    }
    return pot;
}

float ex (float x, int n){
    int i;
    float res=1;
    for (i=1; n!=0; n--){
        res += pot(x, n)/fat(n);
    }


    return res;
}
