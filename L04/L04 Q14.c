#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int aleatorio (int, int);

int main () {
    int n, num, maior=0, menor=100, soma=0, produto=1;
    srand (time(NULL));

    printf ("Quantidade de numeros a serem sorteados: ");
    scanf ("%d", &n);

    while (n != 0){
        num = aleatorio (1, 100);
        printf ("%d\n", num);

        if (num > maior)
            maior = num;
        if (num < menor)
            menor = num;

        if (num % 2 == 1){
            soma += num;
        }
        if (num % 2 == 0){
            produto *= num;
        }

        n--;
    }


    printf ("Maior: %d\n\n", maior);
    printf ("Menor: %d\n\n", menor);
    printf ("Somatorio dos impares: %d\n\n", soma);
    printf ("Produto dos pares: %d\n\n", produto);




    system ("pause");
    return 0;
}

int aleatorio (int a, int b){
    return a + rand() % (b-a+1);
}


