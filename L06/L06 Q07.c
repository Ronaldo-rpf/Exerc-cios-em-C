#include <stdio.h>
#include <stdlib.h>
#define N 10
#include <ctype.h>

int main () {
    char s1[N] = "12", s2[N] = "23", s3[N] = "500", s4[N] = "1";

    if (isdigit(s1[0]) && isdigit(s2[0]) && isdigit(s3[0]) && isdigit(s4[0])){
        printf ("%d\n\n", atoi(s1) + atoi(s2) + atoi(s3) + atoi(s4));
    }
    else{
        printf ("Error.\n\n");
    }


    system ("pause");
    return 0;
}
