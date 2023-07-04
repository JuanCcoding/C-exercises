#include <stdio.h>
#include <math.h> // raiz cuadrada "sqrt"
#include <stdlib.h> //system ("pause")
//calculo de masa corporal
//Juan Carlos Fernandez Calvo
//EJERCICIO 1

int main ()
{
while(1)
{

    float peso, altura, masa;

    do {

    printf ("!!!!!!!Bienvenido a la Calculadora de su Masa Corporal!!!!!:\n");

    printf ("Introduzca su peso (kg):");
    scanf ("%f", &peso);
    if (peso<5 || peso>200) printf ("Datos no soportados, solo de 5-200\t");
       } while (peso<5 || peso>200);

    do {
    printf ("Introduzca su altura (cm):");
    scanf ("%f", &altura);
    if (altura<40 || altura>250) printf ("Datos no soportados, solo de 40-250\t");
       }while (altura<40 || altura>250);

     masa= sqrt (peso*altura/3600);

    printf("El calculo de su masa corporal es :%.2f m2\n", masa);
    printf("Quieres hacer otro calculo?\n");
    system ("pause");
}

    return 0;
}
