#include <stdio.h>
#include <stdlib.h>
void print_linha (int);
void print_quadrado (int);
void print_quadrado_vazado (int);
void print_triangulo (int);

int main (){
    int lado, sn;

    printf ("Qual deles? Quadrado inteiro=1, Quadrado Vazado=0\n");
    scanf ("%d", &sn);

    if (sn == 1){
        printf ("lado: ");
        scanf ("%d", &lado);

        printf ("\n");
        print_quadrado (lado);
        printf ("\n\n");

        system ("pause");
        return 0;
    }

    if (sn == 0){
        printf ("lado: ");
        scanf ("%d", &lado);

        printf ("\n");
        print_quadrado_vazado (lado);
        printf ("\n\n");

        system ("pause");
        return 0;
    }



    system ("pause");
    return 0;
}

void print_linha (int lado){
    for (int i=0; i<lado; i++){
        printf ("*");
    }
    printf ("\n");
    return;
}

void print_quadrado (int lado){
    for (int i=0; i<lado; i++){
        print_linha (lado);
    }
    return;
}

void print_quadrado_vazado (int lado){
    int i, aux;
    print_linha (lado);
    for (i=0; i<lado-2; i++){
        printf ("*");
        for (aux=0; aux<lado-2; aux++){
            printf (" ");
        }
        printf ("*");
        printf ("\n");
    }
    print_linha (lado);
    return;
}

