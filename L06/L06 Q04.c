#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char str[50];
    int i=0;
    printf ("Nome: ");
    gets(str);

    while (str[i] != '\0'){
        if (islower(str[i])){
            printf ("%c", toupper(str[i]));
        }
        if (isupper(str[i])){
            printf ("%c", tolower(str[i]));
        }
        i++;
    }

    printf ("\n\n");


    system ("pause");
    return 0;
}
