#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int aleatorio (int, int);
void jogo (int, int);

int main () {
    int palp, num;
    srand (time(NULL));

    num = aleatorio (1, 100);

    printf ("Qual o seu palpite?\n");
    scanf ("%d", &palp);
    jogo (palp, num);



    system ("pause");
    return 0;
}

int aleatorio (int a, int b){
    return a + rand() % (b-a+1);
}

void jogo (int palp, int num){
    while (palp != num){
        if (palp > num){
            printf ("Muito alto. Tente novamente.\n");
        }
        else {
            printf ("Muito baixo. Tente novamente.\n");
        }
        scanf ("%d", &palp);
    }
    printf ("Excelente! Voce adivinhou o numero!\n\n");
    return;
}
