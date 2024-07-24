#include <stdio.h>
#include <stdlib.h>

int main () {
    char vet[14] = {'S', 'u', 's', 'a', 'n', 'a', ' ', 'e', ' ', 'l', 'i', 'n', 'd', 'a'};
    int i;
    for(i=0; i<14; i++){
        if (vet[i] == ' '){
            continue;
        }
        else{
            printf ("%c", vet[i]);
        }
    }


    printf ("\n\n");

    system ("pause");
    return 0;
}
