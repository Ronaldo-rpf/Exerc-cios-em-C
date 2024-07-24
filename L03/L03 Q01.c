#include <stdio.h>
#include <stdlib.h>

int main (){
    float litros, kilometros, taxa, km_final, l_final, taxa_final;

    printf ("Digite os kilometros percorridos (-1 para finalizar): ");
    scanf ("%f", &kilometros);

    while (kilometros != -1){
      printf ("Digite os litros consumidos: ");
      scanf ("%f", &litros);

      taxa = kilometros / litros;

      printf ("a taxa km/litro para esse tanque foi: %f\n\n", taxa);

      km_final += kilometros;
      l_final += litros;
      printf ("Digite os kilometros percorridos (-1 para finalizar): ");
      scanf ("%f", &kilometros);

    }

    taxa_final = km_final / l_final;
    printf ("A taxa total de km/litro foi: %f\n", taxa_final);






    system ("pause");
    return 0;
}
