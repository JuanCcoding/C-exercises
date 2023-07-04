#include <stdio.h>
#include <stdlib.h>
//Sumatoria de 10

int main()
{

    float sumatoria,acumulado=0;

    float inferior,superior;

    do
    {
            printf ("indicame un limite inferior:   ") ;
            scanf("%f", &inferior) ;
            printf ("indicame un limite superior:   ") ;
            scanf("%f", &superior) ;


    } while (inferior>superior) ;


        for(sumatoria=inferior; sumatoria <= superior; sumatoria++)
    {
        // printf("El termino es:   %.2f\n", (1.0/(float) sumatoria));    //aqui tendriamos las "trazas" , es decir los calculos que se van realizando pero que no nos piden que se muestre
            acumulado= acumulado+(1.0/(float) sumatoria); // no colocamos int en sumatoria por qu

        //  acumulado+=(1.0/(float) sumatoria); es lo mismo que esta arriba, abreviado

}
            printf("El acumulado es: %.2f\n", acumulado);
            system("pause");
}
