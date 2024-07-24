#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char str[50];
    int i = 0;
    printf ("Nome qualquer: ");
    gets(str);

    while (str[i] != '\0'){
        printf ("%c\n", str[i]);
        i++;
    }





    system ("pause");
    return 0;
}
