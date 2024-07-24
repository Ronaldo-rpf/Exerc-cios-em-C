#include <stdio.h>
#include <stdlib.h>

int main () {
    char p1[20] = "ronaldo", p2[20] = "ron";
    int i, num=0;

    for (i=0; p1[i] != '\0'; i++){
        if (p1[i] != p2[i]){
            printf ("palavras diferentes.\n\n");
            return 0;
        }
    }
    for (i=0; p2[i] != p1[i]; i++){
        num++;
        if (num>1){
            printf ("a segunda string e sub-string da primeira.\n");
        }
    }





    system ("pause");
    return 0;
}
