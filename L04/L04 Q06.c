#include <stdio.h>
#include <stdlib.h>
int primo (int);

int main () {
    int num, res;
    for (num=1; num<=1000; num++){
        res = primo (num);
        if (res == 1){
            printf ("%d\n", num);
        }
    }


    system ("pause");
    return 0;
}

int primo (int num){
    for (int aux=2; aux<=num; aux++){
        if (num%aux==0){
            if (num==aux){
                return 1;
            }
            else{
                return 0;
            }
        }
    }
}
