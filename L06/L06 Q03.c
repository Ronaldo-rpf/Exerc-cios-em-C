#include <stdio.h>
#include <stdlib.h>

int main () {
    char str[50];
    int i=0;
    printf ("Nome: ");
    gets(str);
    while (str[i] != '\0'){
        printf ("%c - %d\n", str[i], str[i]);
        i++;
    }





    system ("pause");
    return 0;
}
