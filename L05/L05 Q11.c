#include <stdio.h>
#include <stdlib.h>

int main () {
    char vet1[4] = {'a', 'm', 'o', 'r'}, vet2[4] = {'r', 'o', 'm', 'a'};
    int i, j, aux = 0, ver = 0;
    for (i=0; i<4; i++){
        for (j=0; j<4; j++){
            if (vet1[i] == vet2[j])
                aux = 1;
        }
        if (aux == 1){
            printf ("Termo encontrado.\n");
            ver++;
        }
        else
            printf ("Termo nao encontrado.\n");
        aux = 0;
    }
    if (ver == 4){
        printf ("Os vetores sao anagramas entre si.\n");
    }
    else{
        printf("Os vetores nao sao anagramas entre si.\n");
    }

    system ("pause");
    return 0;
}
