#include <stdio.h>
#include <stdlib.h>

int main () {
    char nome[50];
    int i;

    printf ("Nome: ");
    gets(nome);

    for (i=0; nome[i] != '\0'; i++){
        if (isupper(nome[i])){
            printf ("%c", nome[i]);
            printf (".");
        }
    }
    printf ("\n\n");






    system ("pause");
    return 0;
}
