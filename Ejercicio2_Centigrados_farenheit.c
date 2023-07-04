#include <stdio.h>
#include <stdlib.h> //system ("pause")
//Conversion de tempratura de centigrados a fahrenheit
//Juan Carlos Fernandes Calvo

int main ()
{
    while (1)
    {


    float centigrados, fahrenheit;


    printf ("Bienvenido a mi programa para convertir la temperatura de grados centigrados a fahrenheit\n");
    printf ("Introduce los grados Centigrados :");
    scanf ("%f", &centigrados);

    fahrenheit = (centigrados * 9) /5 +32;

    printf ("Resultado en Farenheit %.2f f:\n", fahrenheit);


    system ("pause");
     }

     return 0;
}
