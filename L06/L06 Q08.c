#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main () {
    char s1[30] = "roma", s2[30] = "amor", vet[30] = {};
    int i, qntd=0, aux=1;

    printf ("Primeira string: \n");
    puts(s1);
    printf ("Segunda string: \n");
    puts(s2);

    for (i=0; s2[i] != '\0'; i++){
        qntd++;
    }
    for (i=0, qntd--; qntd >= 0; i++, qntd--){
        vet[i] = s2[qntd];
    }

    for (i=0; s1[i] != '\0' || vet[i] != '\0'; i++){
        if (s1[i] == vet[i]){
            continue;
        }
        else{
            aux=0;
            break;
        }
    }
    if (aux==1){
        printf ("Essas string sao anagramas!!!\n\n");
    }
    else{
        printf ("Essas string nao sao anagramas.\n\n");
    }



    system ("pause");
    return 0;
}
