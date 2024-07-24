#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int aleatorio (int, int);
void resposta (int, int);

int main () {
    int certo, digito1, digito2, resp;
    srand (time (NULL));
    printf ("Serao 10 perguntas...\n");

    for (int cont=1; cont<=10; cont++){
        digito1 = aleatorio (0, 9);
        digito2 = aleatorio (0, 9);
        printf ("Quanto e %d vezes %d?\n", digito1, digito2);
        scanf ("%d", &resp);
        certo = digito1*digito2;
        resposta (resp, certo);
    }



    system ("pause");
    return 0;
}

int aleatorio (int a, int b){
    return a + rand() % (b-a+1);
}

void resposta (int resp, int certo){
    while (resp != certo){
        printf ("Nao. Tente novamente ate acertar.\n");
        scanf ("%d", &resp);
    }
    printf ("Muito beeeem!!!!\n\n");
    return;
}
