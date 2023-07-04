//Ejercicio propuesto Nº4
//Sobre numeros entre 0-200, dar información sobre si "x" esta entre esos valores y si es menor que 100 o de 200.
//Juan Carlos Fernandez Calvo

#include <stdio.h>
#include <stdlib.h> //system ("pause")

int main ()
{

    float numero;

    while(1)
    {

        //printf("Tendras que introducir un numero, te dire si ese numero es > o < de 100 y 200, ademas de decirte si esta entre dichos valores\n");
        printf ("Introduce un numero y te dire un par de cosas:") ;
        scanf ("%f", &numero);

        if (numero>100)
        {
            printf ("El numero es mayor a 100\n");
        }
        if (numero<100)
        {
            printf ("El numero es menor a 100\n");
        }
        if (numero<200)
        {
            printf ("El numero es menor a 200\n");
        }
        if (numero>200)
        {
            printf ("El numero es mayor a 200\n");
        }
        if (numero>=100 && numero<=200) // sentencia AND , entre intervalos
        {
            printf ("El numero SI esta entre 100 y 200\n");
        }
        if (numero<100 || numero>200)  //sentencia || or , fuera de intervalos
        {
            printf ("El numero NO esta entre 100 y 200\n");
        }


    }
    system("pause");
}


// Juan Fernandez




