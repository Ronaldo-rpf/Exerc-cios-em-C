#include <stdio.h>
#include <stdlib.h>

int main () {
    int nota, pessoas = 0;
    float zero=0, um=0, dois=0, tres=0, quatro=0, cinco=0, boaGestao;
    char porcentagem = '%';

    printf ("Qual nota de 0 a 5 voce daria para a qualidade do governo de Itabuna? (-1 para sair):\n");
    scanf ("%d", &nota);

    while (nota != -1){
        pessoas ++;
        switch (nota){
            case 0:
                zero++;
                break;
            case 1:
                um++;
                break;
            case 2:
                dois++;
                break;
            case 3:
                tres++;
                break;
            case 4:
                quatro++;
                break;
            case 5:
                cinco++;
                break;
            default:
                printf ("Esse nota nao esta entre 0 e 5.\n\n");
        }
        printf ("Qual nota de 0 a 5 voce daria para a qualidade do governo de Itabuna? (-1 para sair):\n");
        scanf ("%d", &nota);
    }
    boaGestao = (quatro + cinco) / (zero + um + dois + tres + quatro + cinco);
    printf ("%d pessoas participaram dessa pesquisa.\n\n", pessoas);
    printf ("Quantidade de votos:\nNota 0: %.1f\nNota 1: %.1f\nNota 2: %.1f\nNota 3: %.1f\nNota 4: %.1f\nNota 5: %.1f\n\n", zero, um, dois, tres, quatro, cinco);
    printf ("%.2f %c dos participantes avaliaram o governo de Itabuna como Bom ou Otimo.\n\n", boaGestao, porcentagem);




    system ("pause");
    return 0;
}
