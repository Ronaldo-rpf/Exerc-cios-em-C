#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int aleatorio (int, int);
void jogo (int);

int main () {
    int dado1, dado2, soma;
    srand (time (NULL));

    dado1 = aleatorio (1, 6);
    dado2 = aleatorio (1, 6);
    printf ("Dados: %d\n", dado1);
    printf ("Dados: %d\n", dado2);
    soma = dado1 + dado2;
    printf ("Lancamento: %d\n\n", soma);

    if (soma == 7 || soma == 11){
        printf ("Voce ganhoooou, parabeeens!!!\n\n");
        system ("pause");
        return 0;
    }
    if (soma == 2 || soma == 3 || soma == 12){
        printf ("Voce perdeu.\n\n");
        system ("pause");
        return 0;
    }
    else {
        jogo (soma);
    }

    system ("pause");
    return 0;
}

int aleatorio (int a, int b){
    return a + rand() % (b-a+1);
}

void jogo (int ponto){
    int dado1, dado2, soma;

    printf ("Ponto: %d\n\n", ponto);

    while (ponto != soma){
        dado1 = aleatorio (1, 6);
        dado2 = aleatorio (1, 6);
        printf ("Dados: %d\n", dado1);
        printf ("Dados: %d\n", dado2);
        soma = dado1 + dado2;
        printf ("Lancamento: %d\n\n", soma);
        if (soma == 7){
            printf ("Voce perdeu.\n\n");
            system ("pause");
            return;
        }
    }
    printf ("Esse lancamento foi o seu ponto, parabens voce ganhooou!!!!!!!!\n\n");
    return;
}
