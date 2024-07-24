#include <stdio.h>
#include <stdlib.h>

int main () {
    char str[50];
    int i=0, qntd=0;
    printf ("Nome: ");
    gets(str);
    while (str[i] != '\0'){
        qntd++;
        i++;
    }
    for (qntd--; qntd>=0; qntd--){
        printf ("%c", str[qntd]);
    }
    printf ("\n\n");


    system ("pause");
    return 0;
}
