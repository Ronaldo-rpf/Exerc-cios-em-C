#include <stdio.h>
#include <stdlib.h>
void print_linha (int);
void print_quadrado (int);
void print_quadrado_vazado (int);
void print_triangulo (int);

int main (){
    int lado;
    printf ("lado: ");
    scanf ("%d", &lado);
    printf ("\n");

    print_quadrado (lado);
    printf ("\n\n");

    print_quadrado_vazado (lado);
    printf ("\n\n");

    print_triangulo (lado);
    printf ("\n\n");




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

void print_triangulo (int lado){
    int aux, i;
    for (i=0; i<lado; i++){
        for (aux=0; aux<=i; aux++){
            printf ("*");
        }
        printf ("\n");
    }

    return;
}
