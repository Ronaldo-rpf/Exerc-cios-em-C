#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int aleatorioUm_Cinco (int, int);
int aleatorioUm_Quatro (int, int);
int aleatorioTres_Dez (int, int);

int main (){
    int a, b, num, cont;
    srand (time (NULL));

    printf ("Tres numeros aleatorios de 1 a 5:\n");
    for (cont=1; cont <= 3; cont++){
        num = aleatorioUm_Cinco (1, 5);
        printf ("%d\n", num);
    }

    printf ("\nUm numero aleatorio entre 1 e 4:\n");
    printf ("%d\n\n", aleatorioUm_Quatro (1, 4));

    printf ("Dez numeros aleatorios entre 3 e 10:\n");
    for (cont=1; cont <= 10; cont++){
        num = aleatorioTres_Dez (3, 10);
        printf ("%d\n", num);
    }



    system ("pause");
    return 0;
}

int aleatorioUm_Cinco (int a, int b){
    return (a + rand() % (b-a+1));
}

int aleatorioUm_Quatro (int a, int b){
    return (a + rand() % (b-a+1));
}

int aleatorioTres_Dez (int a, int b){
    return (a + rand() % (b-a+1));
}
