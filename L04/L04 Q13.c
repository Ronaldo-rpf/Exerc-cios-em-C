#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float distancia (float, float, float, float);

int main (){
    float x0, x1, y0, y1, ver, dist, distMedia, deno=0, distFinal=0;

    printf ("Deseja digitar um par? (sim = 1, nao = 0)\n");
    scanf ("%f", &ver);

    while (ver == 1){
        printf ("x0: ");
        scanf ("%f", &x0);
        printf ("y0: ");
        scanf ("%f", &y0);
        printf ("x1: ");
        scanf ("%f", &x1);
        printf ("y1: ");
        scanf ("%f", &y1);

        dist = distancia (x0, y0, x1, y1);
        printf ("Distancia: %.2f\n\n", dist);

        distFinal += dist;
        deno++;

        printf ("Deseja digitar mais um par? (sim = 1, nao = 0)\n");
        scanf ("%f", &ver);
    }

    distMedia = distFinal/deno;
    printf ("Distancia Media: %.2f\n\n", distMedia);


    system ("pause");
    return 0;
}

float distancia (float x0, float y0, float x1, float y1){
    return sqrt((pow(x1-x0, 2))+(pow(y1-y0, 2)));
}
