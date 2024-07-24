#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float distancia (float, float);

int main () {
    float x, y, dist;
    printf ("x (-1000 para sair): ");
    scanf ("%f", &x);

    while (x != -1000){
        printf ("y: ");
        scanf ("%f", &y);
        dist = distancia (x, y);
        printf ("Distancia ate a origem: %.2f\n\n", dist);
        printf ("x (-1000 para sair): ");
        scanf ("%f", &x);
    }

    system ("pause");
    return 0;
}

float distancia (float x, float y){
    if (x == 0 && y == 0){
        return 0;
    }
    if (x == 0){
        return y;
    }
    if (y == 0){
        return x;
    }
    else{
        return sqrt(x*x + y*y);
    }
}
