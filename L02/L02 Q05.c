#include <stdio.h>
#include <stdlib.h>

int main (){
    int x, y;

    printf ("Digite uma coordenada: ");
    scanf ("%d %d", &x, &y);
    if (x>0 && y>0) {
        printf ("Esta no primeiro quadrante.\n");
    }
    if (x<0 && y>0) {
        printf ("Esta no segundo quadrante.\n");
    }
    if (x<0 && y<0){
        printf ("Esta no terceiro quadrante.\n");
    }
    if (x>0 && y<0) {
        printf ("Esta no quarto quadrante.\n");
    }
    if (x==0) {
        printf ("Esta no eixo das ordenadas.\n");
    }
    if (y==0) {
        printf ("Esta no eixo das abscisas.\n");
    }

    system ("pause");
    return 0;
}

