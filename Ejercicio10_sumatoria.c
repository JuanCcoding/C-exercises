#include <stdio.h>
#include <stdlib.h>

//Juan Carlos fernandez calvo
//Problema interesante, similar al 7 pero cambio de formula, aun en desarrollo.

int main()
{
    while (1)
    {

    float numerov,numeroz,sumatoria=0,acumulado=0;

        printf("Introduce un valor v:");
        scanf("%f",&numerov);

        printf("Introduce un valor Z:");
        scanf("%f",&numeroz);

    if (numerov<numeroz)

        printf ("El numero v debe ser mayor que el numero z, vuelve a intentarlo:\n");

    else

    for(sumatoria=numeroz; sumatoria <= numerov; sumatoria++)

    {

        acumulado= acumulado+(1.0 + (float) sumatoria);

    }


    //(numero=z; numero<=v;numero++) //1- error al no tener la variable "acumulado"
    //(sumatoria=sumatoria+numerov++)//2- no puedo definir la sumatoria como el 0 mas numero v sin hacer una division

    printf("La sumatoria es: %f\n", acumulado);

}
  system("pause");
}
