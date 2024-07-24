#include <stdio.h>
#include <stdlib.h>

int main () {
    float lucro, maior = 0, maior_lucro;
    int pro1=0, pro2=0, pro3=0, pro4=0, pro5=0, qntd_total, qntd, num = 1, dia = 1, campeao;


    while (dia <= 7){
        switch (dia){
            case 1:
                printf ("Segunda\n");
                break;
            case 2:
                printf ("Terca\n");
                break;
            case 3:
                printf ("Quarta\n");
                break;
            case 4:
                printf ("Quinta\n");
                break;
            case 5:
                printf ("Sexta\n");
                break;
            case 6:
                printf ("Sabado\n");
                break;
            case 7:
                printf ("Domingo\n");
                break;
        }
        while (num <= 5){
            printf ("Numero do Produto: %d\n", num);
            printf ("Quantidade vendida: ");
            scanf ("%d", &qntd);
            switch (num){
                case 1:
                    pro1 += qntd;
                    break;
                case 2:
                    pro2 += qntd;
                    break;
                case 3:
                    pro3 += qntd;
                    break;
                case 4:
                    pro4 += qntd;
                    break;
                case 5:
                    pro5 += qntd;
                    break;
            }
            num++;
            if (pro1+pro2+pro3+pro4+pro5 > maior){
                maior = dia;
            }
        }
        dia++;
        num = 1;
    }
    qntd_total = pro1+pro2+pro3+pro4+pro5;
    printf ("Total de itens vendidos na semana: %d\n", qntd_total);
    lucro = pro1 * 1.43 + pro2 * 2.23 + pro3 * 4.52 + pro4 * 0.69 + pro5 * 3,72;
    printf ("Lucro total da semana : %f\n", lucro);
    printf ("Dia de maior venda: %d\n", maior);
    if (pro1 * 1.43 > pro2 * 2.23){
        campeao = 1;
        maior_lucro = pro1 * 1.43;
    }
    else if (pro2 * 2.23 > pro1 * 1.43){
        campeao = 2;
        maior_lucro = pro2 * 2.23;
    }
    else if (maior_lucro < pro3 * 4.52){
        campeao = 3;
        maior_lucro = pro3 * 4.52;
    }
    else if (maior_lucro < pro4 * 0.69){
        campeao = 4;
        maior_lucro = pro4 * 0.69;
    }
    else if (maior_lucro < pro5 * 3,72){
        campeao = 5;
        maior_lucro = pro5 * 3,72;
    }
    printf ("Produto campeao da semana: %d\ncom %f em lucro de vendas\n", campeao, maior_lucro);



    system ("pause");
    return 0;
}
