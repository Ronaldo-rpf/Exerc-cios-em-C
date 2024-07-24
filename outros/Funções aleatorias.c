#include <stdio.h>
#include <stdlib.h>
int quadrado (int);
int cubo (int);
int fatorial (int);
float area_retangulo (float, float);
float area_triangulo (float, float);
int primo (int);

int main (){
    int sn, num;
    float lado1, altura;
    printf ("Numero: ");
    scanf ("%d", &num);

    printf ("quadrado: %d\n", quadrado (num));
    printf ("cubo: %d\n", cubo(num));
    printf ("fatorial: %d\n", fatorial (num));

    sn = primo (num);
    if (sn == 1){
        printf ("primo: sim\n");
    }
    else{
        printf ("primo: nao\n");
    }

    printf ("\n");
    printf ("Lado: ");
    scanf ("%f", &lado1);
    printf ("Altura: ");
    scanf ("%f", &altura);

    printf ("area retangulo: %.2f\n", area_retangulo(lado1, altura));
    printf ("area triangulo: %.2f\n\n", area_triangulo(lado1, altura));

    system ("pause");
    return;
}

int quadrado (int num){
    return num*num;
}

int cubo (int num){
    return num*num*num;
}

int fatorial (int num){
    int fat = 1;
    for (int i=1; i<=num; i++){
        fat*=i;
    }
    return fat;
}

int primo (int num){
    for (int i=2; i<num; i++){
        if (num%i==0){
            return 0;
        }
    }
    return 1;
}

float area_retangulo (float base, float altura){
    return base*altura;
}

float area_triangulo (float lado1, float altura){
    return lado1*altura/2;
}
