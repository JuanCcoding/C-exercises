#include <stdio.h>
#include <stdlib.h> //system ("pause")
#include <math.h> // funcion M_PI

//Calculo del area de un circulo/circunferencia, necesitando para ello el radio.
//Juan Carlos Fernandez Calvo


int main ()
{
   while (1)
   {

    float radio,area;



    printf ("!!!!Bienvenido a mi programa para calcular el area de una circunferencia!!!!\n");
    printf ("!!!!Necesitaras Saber el valor del radio!!!!\n");
    printf ("!!!!Vamos alla!!!!\n");

    printf ("Introduce el valor del radio de la circunferencia en centimetros:");
    scanf ("%f", &radio);

    area= M_PI * (radio * radio);

    printf ("El area de tu circunferencia es %.2f cm2\n:", area) ;
    system ("pause");
    }
    return 0;

}
