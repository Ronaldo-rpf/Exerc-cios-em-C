#include <stdio.h>
#include <stdlib.h>

int main () {
    char str[50], carac;
    int i;
    printf ("String: ");
    gets(str);

    for (i=0; str[i] != '\0'; i++){
        if(i>=50){
            printf ("String maior do que 50 caracteres.\n\n");
            return 0;
        }
    }

    printf ("Um caractere qualquer: ");
    scanf ("%c", &carac);

    for (i=0; str[i] != '\0'; i++){
        if(str[i] == carac){
            i++;
        }
        printf ("%c", str[i]);
    }
    printf ("\n\n");


    return 0;
}
