#include <stdio.h>
#include <stdlib.h>

int main () {
    char str[100], vet[100] = {};
    int i, j, num;

    printf ("Frase: ");
    gets(str);

    for (i=0; str[i] != '\0'; i++){
        if (i>=100){
            printf ("string longa demais\n\n");
            return 0;
        }
    }

    for (i=0; str[i] != '\0'; i++){
        for (j=0; str[j] != '\0'; j++){
            if (str[i] == str[j]){
                vet[i] = str[i];
                num++;
            }
        }
        printf ("%c = %d\n", vet[i], num);
        num=0;
    }



    system ("pause");
    return 0;
}
