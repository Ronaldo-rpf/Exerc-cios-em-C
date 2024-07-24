#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main () {
    char str[100];
    int i, palavras=1, letras=0, maiusculas=0, minusculas=0, digitos=0;

    printf ("String: ");
    gets(str);
    for (i=0; str[i] != '\0'; i++){
        if (str[i] == ' '){
            palavras++;
        }
    }
    for (i=0; str[i] != '\0'; i++){
        letras++;
    }
    for (i=0; str[i] != '\0'; i++){
        if (isupper(str[i])){
            maiusculas++;
        }
        if (islower(str[i])){
            minusculas++;
        }
        if (isdigit(str[i])){
            digitos++;
        }
    }

    printf ("palavras = %d\ncaracteres = %d\nmaiuscula = %d\nminusculas = %d\ndigitos = %d\n\n", palavras, letras, maiusculas, minusculas, digitos);



    system ("pause");
    return 0;
}
